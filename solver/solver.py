import os
import random
import time

PATH_TO_TESTS = 'test'
PATH_NAME_BOOL2CNF = 'examples/bool2cnf'

def read_clause(cmd_path, fname):
    command = f"{PATH_NAME_BOOL2CNF} {os.path.join(cmd_path, fname)}"
    with open(os.path.join(PATH_TO_TESTS, fname), 'r') as f:
        print(f.read())
    output = os.popen(command).read()
    cnf_name = fname + ".cnf"
    with open(cnf_name, "w") as file:
        file.write(output)
    with open(cnf_name, "r") as f:
        read_count = 0
        clauses = []
        readflag = 1
        num_var = None
        num_claus = None
        for x in f:
            if x[0] == 'c':
                continue
            if x[0] == 'p':
                x = x.split()
                num_var = int(x[2])
                num_claus = int(x[3])
                continue
            if readflag == 1:
                new_clause = []
            x = x.split()
            for j in x:
                i = int(j)
                readflag = 0
                if i == 0:
                    clauses.append(new_clause)
                    readflag = 1
                    read_count += 1
                    break
                if -i in new_clause:
                    readflag = 1
                    read_count += 1
                    break
                if i not in new_clause:
                    new_clause.append(i)
                if i > num_var:
                    return 0, num_var, num_claus
                if read_count >= num_claus:
                    return 0, num_var, num_claus
    return 1, num_var, num_claus, clauses

def bcp(clauses, literal):
    new_claus_set = [x[:] for x in clauses]
    for x in reversed(new_claus_set):
        if literal in x:
            new_claus_set.remove(x)
        if -literal in x:
            x.remove(-literal)
            if not x:
                return -1
    return new_claus_set

def unit_propagation(clauses):
    flag = 1
    assignment = []
    while flag != 0:
        flag = 0
        for x in clauses:
            if len(x) == 1:
                unit = x[0]
                clauses = bcp(clauses, unit)
                assignment += [unit]
                flag = 1
            if clauses == -1:
                return -1, list()
            if not clauses:
                return clauses, assignment
    return clauses, assignment

def vsids_init(clauses, num_var):
    counter = dict()
    for x in range(-num_var, num_var + 1):
        counter[x] = 0
    for clause in clauses:
        for literal in clause:
            counter[literal] += 1
    return counter

def vsids_conflict(counter, conflict_clause):
    for literal in conflict_clause:
        counter[literal] += 1
    return counter

def vsids_decay(counter, num_var):
    for i in range(-num_var, num_var + 1):
        counter[i] = counter[i] * 95 / 100
    return counter

def vsids_decide(counter, m, num_var):
    max_count = 0
    var = 0
    for x in range(-num_var, num_var + 1):
        if counter[x] >= max_count and x not in m and -x not in m:
            max_count = counter[x]
            var = x
    return var

def cdcl(clauses, num_var):
    m = []
    decide_pos = []
    clauses, m = unit_propagation(clauses)
    if clauses == -1:
        return -1, 0, 0, 0, 0
    back = m[:]
    counter = vsids_init(clauses, num_var)
    literal_watch, clauses_literal_watched = create_watch_list(clauses, m, num_var)

    probability = 0.9
    restart_count = learned_count = decide_count = imp_count = 0

    while not all_vars_assigned(num_var, len(m)):
        variable = vsids_decide(counter, m, num_var)
        decide_count += 1
        assign(variable, m, decide_pos)
        conflict, literal_watch = two_watch_propagate(clauses, literal_watch, clauses_literal_watched, m, variable)
        while conflict != -1:
            vsids_conflict(counter, conflict)
            counter = vsids_decay(counter, num_var)
            learned_c = analyze_conflict(m, conflict, decide_pos)
            dec_level = add_learned_clause_to(clauses, literal_watch, clauses_literal_watched, learned_c, m)
            learned_count += 1
            jump_status, var, imp_count = backjump(m, dec_level, decide_pos, imp_count)

            if jump_status == -1:
                return -1, restart_count, learned_count, decide_count, imp_count
            m.append(var)
            probability, restart_count = random_restart(m, back, decide_pos, probability, restart_count)
            conflict, literal_watch = two_watch_propagate(clauses, literal_watch,

 clauses_literal_watched, m, var)

    return m, restart_count, learned_count, decide_count, imp_count

def create_watch_list(clauses, m, num_var):
    literal_watch = dict()
    clauses_literal_watched = []
    for i in range(-num_var, num_var + 1):
        literal_watch[i] = []
    for i in range(len(clauses)):
        new_c = []
        first = 0
        for j in range(len(clauses[i])):
            if clauses[i][j] not in m and first == 0:
                A = clauses[i][j]
                first = 1
                continue
            if clauses[i][j] not in m and first == 1:
                B = clauses[i][j]
                break
        new_c.append(A)
        new_c.append(B)
        clauses_literal_watched.append(new_c)
        literal_watch[A].append(i)
        literal_watch[B].append(i)
    return literal_watch, clauses_literal_watched

def two_watch_propagate(clauses, literal_watch, clauses_literal_watched, m, variable):
    prop_list = [variable]
    while len(prop_list) != 0:
        variable = prop_list.pop()
        for affected_clause_num in reversed(literal_watch[-variable]):
            affected_clause = clauses[affected_clause_num][:]
            A = clauses_literal_watched[affected_clause_num][0]
            B = clauses_literal_watched[affected_clause_num][1]
            A_prev = A
            B_prev = B
            status, m, A, B, unit = check_status(affected_clause, m, A, B)
            if status == "Unit":
                prop_list.append(unit)
                m.append(unit)
            elif status == "Unsatisfied":
                return affected_clause, literal_watch
            literal_watch[A_prev].remove(affected_clause_num)
            literal_watch[B_prev].remove(affected_clause_num)
            clauses_literal_watched[affected_clause_num][0] = A
            clauses_literal_watched[affected_clause_num][1] = B
            literal_watch[A].append(affected_clause_num)
            literal_watch[B].append(affected_clause_num)
    return -1, literal_watch

def check_status(clause, m, A, B):
    unit = 0
    if A in m or B in m:
        return "Satisied", m, A, B, unit
    sym = []
    for literal in clause:
        if -literal not in m:
            sym.append(literal)
        if literal in m:
            if -A not in m:
                return "Satisied", m, A, literal, unit
            return "Satisied", m, literal, B, unit
    if len(sym) == 1:
        return "Unit", m, A, B, sym[0]
    if len(sym) == 0:
        return "Unsatisfied", m, A, B, unit
    else:
        return "Unresolved", m, sym[0], sym[1], unit

def random_restart(m, back, decide_pos, probability, restart_count):
    if random.random() < probability:
        m = back[:]
        decide_pos = []
        probability *= 0.5
        restart_count += 1
        if probability < 0.001:
            probability = 0.2
        if restart_count > len(m) + 10:
            probability = 0
    return probability, restart_count

def verify(m, clauses):
    for c in clauses:
        flag = 0
        for lit in c:
            if lit in m:
                flag = 1
                break
        if flag == 0:
            return False
    return True

def analyze_conflict(m, conflict, decide_pos):
    learn = []
    for x in decide_pos:
        learn.append(-m[x])
    return learn

def all_vars_assigned(num_var, m_len):
    if m_len >= num_var:
        return True
    return False

def assign(variable, m, decide_pos):
    decide_pos.append(len(m))
    m.append(variable)

def add_learned_clause_to(clauses, literal_watch, clauses_literal_watched, learned_c, m):
    if len(learned_c) == 0:
        return -1
    if len(learned_c) == 1:
        m.append(learned_c[0])
        return 1, learned_c[0]
    clauses.append(learned_c)
    A = learned_c[0]
    B = learned_c[1]
    i = len(clauses) - 1
    new_c = []
    new_c.append(A)
    new_c.append(B)
    clauses_literal_watched.append(new_c)
    literal_watch[A].append(i)
    literal_watch[B].append(i)
    return 0

def backjump(m, dec_level, decide_pos, imp_count):
    imp_count = imp_count + len(m) - len(decide_pos)
    if not decide_pos:
        return -1, -1, imp_count
    dec_level = decide_pos.pop()
    literal = m[dec_level]
    del m[dec_level:]
    return 0, -literal, imp_count

def main_dir():
    cmd_path = input("Введите путь к папке с файлами:")
    fnames = os.listdir(cmd_path)
    fnames = sorted(fnames)
    for fname in fnames:
        fname = fname.strip()
        print("=" * 15)
        print(f"\nФайл: {fname} \n")
        a, num_var, num_claus, clauses = read_clause(cmd_path, fname)
        if a != 1:
            print("Errors")
            continue
        start = time.process_time()
        solution = cdcl(clauses, num_var)
        end = time.process_time()

        try:
            os.remove(fname + ".cnf")
        except:
            pass
        if solution[0] != -1:
            print("SAT:")
            assn = solution[0][:]
            assn.sort(key=abs)
            print("\n".join(str(lit) for lit in assn))
        else:
            print("UNSAT")
        print(f"Время :{(end-start)} сек")
        print("=" * 15, '\n')

def main():
    fname = input("Введите имя файла в папке test файлу:")
    fname = fname.strip()
    print(f"\nФайл: {fname} \n")
    a, num_var, num_claus, clauses = read_clause(fname)
    if a != 1:
        print("Errors")
        return
    start = time.process_time()
    solution = cdcl(clauses, num_var)
    end = time.process_time()
    print("=" * 15)
    try:
        os.remove(fname + ".cnf")
    except:
        pass
    if solution[0] != -1:
        print("SAT:")
        assn = solution[0][:]
        assn.sort(key=abs)
        print("\n".join(str(lit) for lit in assn))
    else:
        print("UNSAT")
    print(f"Время :{(end-start)} сек")
    print("=" * 15)

if __name__ == "__main__":
    main_dir() 
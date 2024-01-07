// This example illustrates reasoning about Boolean
// formula using Tseitin's encoding and brute force
//

#include <parsing/ast.h>
#include <sat/skeleton.h>
#include <sat/cnf_clause_list.h>

bool compute(unsigned int mask, cnf_clause_listt::clausest clauses) {
    for (cnf_clause_listt::clausest::iterator i = clauses.begin(); i != clauses.end(); ++i) {
        bvt clause = *i;
        bool f = false;
        for (bvt::iterator j = clause.begin(); j != clause.end(); ++j) {
            literalt l = *j;
            int number = l.dimacs();
            if (number < 0) {
                number = -number - 1;
                if (!(mask & (1 << number))) {
                    f = true;
                }
            } else {
                number = number - 1;
                if (mask & (1 << number)) {
                    f = true;
                }
            }
        }
        if (!f) {
            return false;
        }
    }
    return true;
}

int main(int argc, char **argv)
{
    //get file name
    if(argc!=2)
    {
        std::cerr << "expected file name as argument" << std::endl;
        return 1;
    }

    ast::astt ast;

    // undeclared variables are predicates
    ast.set_default_id_token(N_PREDICATE);

    if(ast.parse(argv[1]))
    {
        std::cerr << "parsing failed" << std::endl;
        return 2;
    }

    // get formula
    ast::nodet f=ast.get_formula();

    if(f.is_nil())
    {
        std::cout << "No formula" << std::endl;
        return 3;
    }

    cnf_clause_listt cnfs;
    // make Tseitin's encoding
    skeleton(f, cnfs);

    // get set of clauses
    cnf_clause_listt::clausest clauses = cnfs.get_clauses();
    // write the resultin formula
    for (cnf_clause_listt::clausest::iterator i = clauses.begin(); i != clauses.end();) {
        // write the clause
        bvt clause = *i;
        std::cout << "(";
        for (bvt::iterator j = clause.begin(); j != clause.end();) {
            // write the literal
            literalt l = *j;
            int number = l.dimacs();
            if (number < 0) {
                std::cout << "~";
                number = -number;
            }
            std::cout << "x" << number;
            ++j;
            if (j != clause.end()) {
                std::cout << " \\/ ";
            }
        }
        std::cout << ")";
        ++i;
        if (i != clauses.end()) {
            std::cout << " /\\ ";
        }
    }
    std::cout << std::endl;

    // brute force algorithm
    for (unsigned int mask = 0; mask < (1 << cnfs.no_variables()); ++mask) {
        // compute formula for current assigment
        if (compute(mask, clauses)) {
            std::cout << "SAT" << std::endl;
            for (int i = 0; i < cnfs.no_variables(); ++i) {
                std::cout << "x" << i << " = ";
                if (mask & (1 << i)) {
                    std::cout << "true" << std::endl;
                } else {
                    std::cout << "false" << std::endl;
                }
            }
            return 0;
        }
    }
    std::cout << "UNSAT" << std::endl;

    return 0;
}

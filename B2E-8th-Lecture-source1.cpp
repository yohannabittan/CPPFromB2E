#include <iostream>

using namespace std;

main()
{
    /*
        AND conjunction &&

        7>5, 5 != 10 , conjunction is true ONLY if both expressions are TRUE

        OR disjunction || ( alternative )
        disjunction is true if one of the expressions is true

        NOT disjunction ! (exclamation mark)

    */
    cout << (7 > 5 && 5 != 10) << endl;
    cout << (7 > 5 || 5 != 5 ) << endl;
    cout << !(7 < 5) <<endl;

}

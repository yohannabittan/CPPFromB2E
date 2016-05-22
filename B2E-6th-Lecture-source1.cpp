#include <iostream>
using namespace std;
//operators
main()
{
    int a=10;
    int b=5;

    cout<< a + b <<endl; // addition operation
    cout<< a - b <<endl; // subtraction operation
    cout<< a * b <<endl; // multiplication operation
    cout<< a / b <<endl; // division operation
    //2.5 becomes 2 because integers cut off the decimal result
    //if only one of the two variables is a double then the result will be a double

    cout<< a % b <<endl; // modulo operation
    //10%4 = 2 , because 2 is the remainder

    //incrementation - increase by 1
    //decrementation - decrease by 1

    int c = 1;

    //c = c + 1;
    c += 1; // it is the same as c = c+1

    cout << c << endl;
    /*
        /= , -=, %=, *=
    */

    int d = 1;

    cout << d++ << endl; //++ here is increment operator

    cout << d << endl;

    // POSTincrementation because the ++ are after the name of the variable.
    // this will output before incrementing

    cout << ++d <<endl;

    //PREincrementation because the ++ are before




}

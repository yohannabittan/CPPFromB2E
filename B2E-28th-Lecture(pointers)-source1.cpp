#include <iostream>

using namespace std;
// POINTERS ARE ordinary variables that can store addresses of variables
int main()
{
    int var= 5;
    int a =20;

    cout<<*&var<<endl;


    int * const p= &var; // that asterisk is used to show that this is a variable of type pointer, which is pointing at the address of another variable
// const means that we cant point at something else, we can however change the value of what we're pointing at.
  //  p = &var;

    cout << *p << endl; // this asterisk is used to RETRIEVE (GET) the value from the address which the pointer contains

    //*p= 20;
//    p=&a;
    *p=60;
    cout << "var: "<< var <<endl;
    cout << "*p: "<<*p <<endl;

    int * const p_const = &a; // this pointer has to be initialized when defined because it cannot change after defining what it is pointing to.
    const int * p_2=&a;
    //const int means value stored in address cannot change!
    const int * const p_3 =&a; // this pointer cant change value OR address!

    cout <<endl <<endl<<endl;
    int ordinary_variable =10;
    int *ordinary_p=&ordinary_variable;

    cout <<"ordinary var: "<<ordinary_variable<<endl;//integer val
    cout<<"ordinary_p: "<<ordinary_p<<endl;//address
    cout<<"*ordinary_p: "<<*ordinary_p<<endl;//value stored in adress
    cout<<"&ordinary_p: "<<&ordinary_p<<endl;//address of pointer itself

    int** p_pointing_to_adress_of_pointer =&ordinary_p;
    cout<<"&ordinary_p: "<<p_pointing_to_adress_of_pointer<<endl;
    return 0;

}

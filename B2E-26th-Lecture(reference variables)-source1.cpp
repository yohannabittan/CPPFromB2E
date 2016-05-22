#include <iostream>

using namespace std;

//reference variables

int main()
{

    string name = "Agnes";

    cout<<"value of variable:" << name << " adress of Variable:"<< &name <<endl;

    string &nr_6 = name;

    // in this case because the ampersand is preceded by the type this is a reference type

    cout<<"value of variable:" << nr_6 << " adress of Variable:"<< &nr_6 <<endl;


    nr_6 = "Scott";

    cout<<"value of variable:" << nr_6 << " adress of Variable:"<< &nr_6 <<endl;

    // a reference var. must be initialized when created.
    // a ref var cant change associations.
    // ref var must be same type as associated variable.

    return 0;


}

#include <iostream>

using namespace std;

main()
{
    int x = 50;

    switch (x)
    {
    case 0:
        cout << "this is a place for the instructions executed when switch value =0"<<endl;
    case 25:
        cout << "this is a place for the instructions executed when switch value =25"<<endl;
    case 50:
        cout << "this is a place for the instructions executed when switch value =50"<<endl;
        break;
    default:
        cout << "this is a place for the instructions executed when switch value is not found in any other case"<<endl;
    }
}

#include <iostream>

using namespace std;

main()
{
    const int SIZEOFARRAY=10;
    int i = 0;
    int array[SIZEOFARRAY];

    while(i< SIZEOFARRAY)
    {
        array[i] = 10*i;
        cout <<array[i++]<<endl;


    }

    /*

    int i=0;

    while(i++ <10)
        cout << i <<endl;


    */

}

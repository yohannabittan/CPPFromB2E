#include <iostream>

using namespace std;
//ARRAYS
main()
{
    int a;

    //int a,b,c,d,e,f,g,h,i,j;

    //int var1,var2,var3---

    int array[4]; //TYPE NAME[SIZE_NR_OF_ELEMENTS];

    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;
    //array[4] = 1234; we can't do this

    cout <<"array [0] = " << array[0]<<", adress: "<<&array[0]<<endl ;
    cout <<"array [1] = " << array[1]<<", adress: "<<&array[1]<<endl;
    cout <<"array [2] = " << array[2]<<", adress: "<<&array[2]<<endl;
    cout <<"array [3] = " << array[3]<<", adress: "<<&array[3]<<endl;

}

#include <iostream>

using namespace std;

main()
{
    /*

    126 = 1*10^2 + 2*10^1 + 6*10^0 = 100 + 20 + 6

    1 0 1 0 = 1*2^3 + 1*2^1 = 8+2=10

    */
    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~
        Bitwise XOR - ^ exclusive OR
        Bitwise left shift <<
        Bitwise right shift >>
    */
    cout << (10 & 2) <<endl;

    /* 10 = 1010
        2 = 0010
        ________
            1010
    */
    cout << (10 | 2) <<endl;
    /* 1010
       0010
       ____
       1010
    */
    cout <<(10^2)<<endl;
    /* 1010
       0010
       ____
       1000
    */
    cout <<(~10)<<endl;
    /* 1010
       0101

    */

    cout << ( 10 << 1) <<endl; //multiplying by 2
    /*
        0 1010
        1 0100
        20 - decimal
        <<
        40 - decimal
    */
    cout <<(10 >> 1)<<endl;//dividing by 2
    /*
    1010
    0101
    */
}

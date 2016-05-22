#include <iostream>

using namespace std;
/* loops - break and continue */

main()
{
    int nr = 1234; // 4 digits
    int nrOfDigits = 1;
/*
    cout << 1234/10 <<endl;
    cout << 1234/10 <<endl;
    cout << 1234/10 <<endl;
    cout << 1234/10 <<endl;
*/
/*    int temp=nr;
    while (nr/=10)
        nrOfDigits++;

    cout << "the number " << temp << " h
    as "<< nrOfDigits<< " digits"<< endl;
*/
    /*
        1 2 3 4 5  6  7  8  9  10
        2 4 6 8 10 12 14 16 18 20
        3 6
    */
    for (int i=1; i<=10; i++) //rows , length of column
    {
        if (i ==5)
            continue; // everything after continue instructions wont be executed but loop will continue.
        for(int j=1; j<=10; j++) //columns, length of row
        {
            cout.width(4);
            cout << i*j << " ";
        }
//everything after break is not executed, thats how you stop a loop for a specific occurence.

        cout << endl;
    }


 }

#include <iostream>

using namespace std;
/*scope / range of variablese */

int globalVariable;

main()
{
    int localVariable;

    cout <<"value of globalVariable: " << globalVariable <<endl;
    cout <<"value of localVariable: " << localVariable <<endl;

    int a =10;

    //if (a == 10)
    //{
    //    int result = a*10;
    //}

    //cout <<result<< endl; cant access a local variable, outside of the code block

    int nr, result= 0;
    int i=0;
    for (; i < 3; i++)
    {
        cout<<"Enter "<< (i + 1)<< "number"<<endl;
        cin >>nr;
        result +=nr;
    }
    cout << result <<endl;
    cout <<"we added "<< i << "numbers "<<endl;
}

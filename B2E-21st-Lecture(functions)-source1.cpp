#include <iostream>

using namespace std;
//functions and parameters
void welcome();// declaration of function
bool isNumber(string );
void enterName();


main()
{
    welcome();
    enterName();
}

void welcome()
{
    cout <<"Hello welcome to my program! " <<endl;
}
bool isNumber(string tmp)
{
    if (tmp[0]=='0')
        return false;

    for (int i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp[i]<= 57))
        {
            return false;
            break;
            //makes the loop faster by ending as soon as needed
        }

        return true;
    }
}
void enterName()
{
    string tmp;

    cout<< "Enter the number: " << endl;
    cin >> tmp;



    if (isNumber(tmp))
        cout <<" Number entered properly " <<endl;
    else
        cout << "Number wasn't entered properly "<<endl;
}


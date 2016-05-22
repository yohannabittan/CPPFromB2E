#include <iostream>

using namespace std;
// enumeration type


enum dayOfWeek {M, TU, W, TH, F, SA, SN};
string getDay(dayOfWeek);
int main()
{
    dayOfWeek d = TH;
    int i=0;

   // cout << d << endl;
    cout<<"Enter the day of the week"<<endl;
    cout<<"1.Monday"<<endl;
    cout<<"2.Tuesday"<<endl;
    cout<<"3.Wednesday"<<endl;
    cout<<"4.Thursday"<<endl;
    cout<<"5.Friday"<<endl;
    cout<<"6.Saturday"<<endl;
    cout<<"7.Sunday"<<endl;
    cin>>i;
    cout <<getDay(dayOfWeek(i-1))<<endl;

    return 0;
}
string getDay(dayOfWeek d)
{
    switch(d)
    {
    case M:
        return "Monday";
    case TU:
        return "Tuesday";
    case W:
        return "Wednesday";
    case TH:
        return "Thursday";
    case F:
        return "Friday";
    case SA:
        return "Saturday";
    case SN:
        return "Sunday";
    default:
        return "You typed something wrong";

    }
}


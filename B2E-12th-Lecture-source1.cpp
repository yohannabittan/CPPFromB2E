#include <iostream>
#include <string>

using namespace std;

main()
{
    int a = 30;
    int b = 20;
    // CONDITION ? so instructions that will be executed if cond is true : if condition is not true
    string message = (a > b) ? "a > b" : "a <= b";


    cout<<((a > b ? a: b) +10)<<endl;
}

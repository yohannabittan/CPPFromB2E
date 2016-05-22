#include <iostream>

using namespace std;

main()
{

//TYPE_OF_VARIABLE nameOfVariable;
//TYPE_OF_VARIABLE nameOfVariable1,nameOfVariable2,nameOfVariable3;

int a = 40, b=0, c=20; //-2 billion to 2 billion, 4 BYTES of memory required

cout<< "a :"<< a << " adress:"<< &a <<endl;
cout<< "b :"<< b << " adress:"<< &b <<endl;
cout<< "c :"<< c << " adress:"<< &c <<endl;

short  t1 = 5; // -32768 to 32767, requires 2 BYTES of memory

cout << t1 << endl;

float t2 = 5.12; // 4 BYTES, numbers up to 38 zeros
double t3 = 5.12;// 8 BYTES, numbers up to 308 zeros

cout << t2 << endl;
cout << t3 << endl;

char t4; //character

t4 = 'a';
cout << t4 <<endl;

string t5 = "Hello World! :-)";

cout << t5 << endl;

string x ="part1";
string y ="part2";
string combinedStrings =x+y;

cout << combinedStrings << endl;
//boolean true or false, false is always 0, every other number is TRUE

bool t6=true;

cout << t6 << endl;

// for unsigned short int 0 to 65535

unsigned short int t7 = 3700;

cout << t7 << endl;


cout << t7 << endl;

const string NAMEOFGAME ="Conqueror of C++";

cout << NAMEOFGAME << endl;

// all caps for constant variables


}




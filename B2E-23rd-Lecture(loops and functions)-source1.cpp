#include <iostream>

using namespace std;
void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
const double PI = 3.14;

int main()
{
	int choice;
	char continu;
	do
    {
        initMenu();

        cin >> choice;
        cin.ignore(1024, '\n');

        menuDecision(choice);
        do
        {
            cout << "Do you want to continue the program? (Y/N)" << endl;
            cin >> continu;
            cin.ignore(1024, '\n');
        } while (continu != 'y' && continu != 'Y' && continu != 'N' && continu != 'n');

    }while(continu == 'y' || continu == 'Y');

	return 0;
}
void initMenu()
{
	cout << "Enter option:" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Rectangle" << endl;
	cout << "4. Triangle" << endl;

}
void menuDecision(int choice)
{
	double r, a, b, h;
	switch (choice)
	{
	case 1:
		cout << "Enter the radius: " << endl;
		do ( cin >> r; ) while(!isValid("The radius is wrong, please rewrite it"));
		areaCircle(r);
		break;
	case 2:
		cout << "Enter the side of a square: " << endl;
		do ( cin >> a; ) while(!isValid("The data is wrong, please rewrite it"));
		areaSquare(a);
		break;
	case 3:
		cout << "Enter the width and height of a rectangle: " << endl;
		do ( cin >> a >> b; ) while(!isValid("The data is wrong, please rewrite it"));
		areaRectangle(a, b);
		break;
	case 4:
		cout << "Enter the base and height of the triangle: " << endl;
		do ( cin >> a >> h; ) while(!isValid("The data is wrong, please rewrite it"));
		areaTriangle(a, h);
		break;
	default:
		cout << "You did not choose any of the available options" << endl;
	}
}
double areaCircle(double r)
{
	double result = PI * r * r;

	cout << " The area of the circle is: " << result << endl;

	return result;
}
double areaSquare(double a)
{
	double result = a * a;

	cout << " The area of the square is: " << result << endl;

	return result;
}
double areaRectangle(double a, double b)
{
	double result = a*b;

	cout << " The area of the rectangle is: " << result << endl;

	return result;
}
double areaTriangle(double a, double h)
{
	double result = (1 / 2.0)*a*h;

	cout << " The area of the circle is: " << result << endl;

	return result;

}
bool isValid(strin error_msg)
{
    if(cin.rdstate()) //state is wrong when it is not equal to 0
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        initmenu();
        cout<<error_msg<<endl;
        return false;
    }

    return true;
    }
}


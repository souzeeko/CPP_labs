#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double x, y, z, s;
	cout << "Введите значение x" << endl; 
    cout << "x = "; cin >> x;
	cout << "Введите значение y" << endl;
    cout << "y = "; cin >> y;
	cout << "Введите значение z" << endl;
    cout << "z = "; cin >> z;
	s = 0;
	if (x + y > z || x + z > y || y + z > x)                                
	{ 
		cout << "Треугольник с данными сторонами существует ";
		if (x == y && x == z)
	    {
		    cout << "и является равносторонним";
	    }
        else if ((x == y && x != z) || (x == z && x != y) || (z == y || z != x))
	    {
		    cout << "и является равнобедренным";
	    }
        else if (pow(x, 2) + pow(y, 2) == pow(z, 2) || pow(x, 2) + pow(z, 2) == pow(y, 2) || pow(z, 2) + pow(y, 2) == pow(x, 2))
	    {
		    cout << "и является прямоугольным";
	    }

    }

	return 0;
}
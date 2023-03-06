// [5]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double x, y;
    cout << "Введите координату x" << endl;
	cout << "x = "; cin >> x;
    cout << "Введите координату y" << endl;
	cout << "y = "; cin >> y;
	if (pow(x, 2) + pow(y, 2) <= 9) 
	{
		cout << "Точка принадлежит данной области";
	}
	else 
	{
		cout << "Точка не принадлежит данной области";
	}
    
	return 0;
}
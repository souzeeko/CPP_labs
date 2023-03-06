#include <iostream>
using namespace std;
// [def]
bool def(double x, double y) 
{
	if (y != 0) 
	{
		cout << "х + у = " << x + y << endl;
		cout << "х – у = "<< x - y << endl;
		cout << "х * у = "<< x * y << endl;
		cout << "х / у = "<< x / y << endl;
		return true;
	}
	else 
	{
		cout << "х + у = " << x + y << endl;
		cout << "х – у = " << x - y << endl;
		cout << "х * у = " << x * y << endl;
		cout << "Невозможно посчитать частное!" << endl;
		return false;
	}
}
// [main]
int main()
{
	setlocale(0, "Russian");

	double x, y;
	cout << "Введите х: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
    // [a]
	def(x, 2);
    // [b]
	cout << endl; def(x, y);
    // [c]
	cout << endl; def(x + y, x - y);

	return 0;
}
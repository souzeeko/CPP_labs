#include <iostream>
#include <cmath>
using namespace std;
// [def]
bool def(double a, double& f) 
{
	if (a <= 2) 
	{
		if (a != 0 && a != 1) 
		{
			f = 2.0 / 3.0 + 1.0 / (3 * a - 3 * pow(a, 2));
			return true;
		}
		else 
		{
			return false;
		}
	}
	else if (a > 5) 
	{
		f = -3 - a;
		return true;
	}
	else 
	{
		f = 72.0 / 7;
		return true;
	}
}
// [main]
int main()
{
	setlocale(0, "Russian");

	double a, a1, f, f1, f2;
	cout << "Введите два значения: ";
	cin >> a >> a1;
	if (def(a, f) == true and def(2, f) == true and def(0, f) == true)
	{
		def(2, f); def(0, f1); def(a, f2);
		cout << "f(2) - f(0) * f(a) = " << f - f1 * f2 << endl;
	}
	else
	{
		cout << "Ошибка при вычислениии!" << endl;
	}
	if (def(2 * a, f) == true and def(6, f) == true and def(a * a1, f) == true)
	{
		def(2 * a, f); def(6, f1); def(a * a1, f2);
		cout << "f(2a) - f(6) + f(ab) = " << f - f1 + f2 << endl;
	}
	else
	{
		cout << "Ошибка при вычислениии!" << endl;
	}

	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
// [def]
bool def(double a, double b, double c, double& x1, double& x2) 
{
	if ((pow(b, 2) - 4 * a * c) < 0)
	{
		return false;
	}
	else  
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		return true;
	}
}
// [main]
int main()
{
	setlocale(0, "Russian");

	double a, b, c, x1, x2, condition;
	cout << "Введите коэфиценты квадратного уравнения: ";
	cin >> a >> b >> c;
	condition = def(a, b, c, x1, x2);
	if (condition == true)
	{
		cout << "Первый корень квадратного уравениея: " << x1 << endl;
		cout << "Второй корень квадратного уравениея: " << x2;
	}
	else
	{
		cout << "Корней нет!";
	}

	return 0;
}
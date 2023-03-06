#include<iostream>
#include<cmath>
using namespace std;
// [def1]
double area_tr(int a, int b) 
{
	return a * b / 2;
}
// [def2]
double area_tr2(int a, int b, int c) 
{
	return a * b * sin(c)/2;
}
// [def3]
bool area_tr3(double a, double b, double c,double& area) 
{
	if (a + b > c and c + b > a and c + a > b) 
	{
		int p = (a + b + c) / 2;
		area = sqrt(p * (p - a) * (p - b) * (p - c));
		return true;
	}
	else 
	{
		return false;
	}
}
// [main]
int main()
{
	setlocale(0, "Russian");

	int a, b, c, ch;
	double area, x, y, z;
	cout << "Выберите метод вычисления площади треугольника:" << endl;
	cout << "1)По стороне и опущенной на нее высоте" << endl;
	cout << "2)По двум сторонам и углу между ними " << endl;
	cout << "3)По трем сторонам" << endl;
    cout << "Метод: "; cin >> ch;
	if (ch == 1)
	{
		cout << "Введите сторону: "; cin >> a;
		cout << "Введите высоту: "; cin >> b;
		area = area_tr(a, b);
		cout << "Площадь треуголнька: " << area << endl;
	}
	else if (ch == 2) {
		cout << "Введите первую сторону: "; cin >> a;
		cout << "Введите вторую сторону: "; cin >> b;
		cout << "Введите угол между ними (в грудусах): "; cin >> c;
		area = area_tr2(a, b, c);
		cout << "Площадь треуголнька: " << area << endl;
	}
	else if (ch == 3)
	{
		cout << "Введите первую сторону: "; cin >> x;
		cout << "Введите вторую сторону: "; cin >> y;
		cout << "Введите третью сторону: "; cin >> z;
		area_tr3(x, y, z, area);
		if (area_tr3(x, y, z, area) == true)
		{
			cout << "Площадь треуголнька: " << area << endl;
		}
		else
		{
			cout << "Данные стороны не образуют треугольник" << endl;
		}
	}
	else
	{
		cout << "Нет способа вычисления" << endl;
	}

	return 0;
}
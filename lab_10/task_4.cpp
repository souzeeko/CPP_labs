#include <iostream>
using namespace std;
// [def]
bool swap(double& x, double& y) 
{
	double t = x;
	double q = y;
	y = t;
	x = q;
	return true;
}
// [main]
int main() 
{
	setlocale(0, "Russian");

	double x, y, z;
	cout << "Введите a: "; 
	cin >> x;
	cout << "Введите b: "; 
	cin >> y;
	swap(x, y);
	cout << "Новый а: " << x << endl;
	cout << "Новый b: " << y << endl;
	cout << "Введите площадь дома Васи: "; 
	cin >> x;
	cout << "Введите площадь дома Пети: "; 
	cin >> y;
	cout << "Введите площадь дома Коли: "; 
	cin >> z;
	swap(x, z); swap(z, y); swap(x, y);
	cout << "Новая площадь дома Васи: " << x << endl;
	cout << "Новая площадь дома Пети: " << y << endl;
	cout << "Новая площадь дома Коли: " << z << endl;
	return 0;
}
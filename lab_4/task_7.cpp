// [7]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double x, y, x1, y1, x2, y2, p; int n;
    p = 0;
	cout << "Введите количество углов многоугольника: "; cin >> n;
	if (n < 3) 
    {
		cout << "error";
	}
	else 
    {
		cout << "Введите координаты углов многоугольника: " << endl;
		cout << "Координата x: "; cin >> x;
		cout << "Координата y: "; cin >> y;
		x2 = x; y2 = y;
		for (int i = 1; i < n; i++) 
        {
			cout << "Координата x" << i << ": "; cin >> x1;
			cout << "Координата y" << i << ": "; cin >> y1;
			p += sqrt(pow(fabs(x1 - x2), 2) + pow(fabs(y1 - y2), 2));
			x2 = x1;
			y2 = y1;
		}
		p += sqrt(pow(fabs(x2 - x), 2) + pow(fabs(y2 - y), 2));
		cout << "Периметр многоугольника: " << p;
	}

	return 0;
}
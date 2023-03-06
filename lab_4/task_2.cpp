// [2abc]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double a, pos, count, s, minimal;
	pos = 1; count = 0; s = 0; minimal = pow(9,999); 
	while (pos < 8)
	{
		cout << "Введите число " << pos << ": "; cin >> a;
		if (a < 0)
		{
			count += 1;
		}
		if ((a > 9 && a < 100) || (a < -9 && a > -100))                 
		{
			s += a;
		}
		if (a < minimal)
		{
			minimal = a;
		}
		pos += 1;
	}
	cout << "Кол-во отрицательных чисел: " << count << endl << "Сумма двузначных чисел: " << s << endl << "Минимальное число: " << minimal;

	return 0;
}
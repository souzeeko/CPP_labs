#include <iostream>
using namespace std;
// [def1]
double factorial(double n)
{
	int sum = 1;
	for (int i = 1; i < n+1; i++)
	{
		sum *= i;
	}
	return sum;
}
// [def2]
double power(double x, double n)
{
	double x1;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		x1 = x;
		for (int i = 1; i < n; i++)
		{
			x *= x1;
		}
		return x;
	}
}
// [main]
int main()
{
	setlocale(0, "Russian");

	double n, m;
	cout << "Введите n: "; cin >> n;
	cout << "Введите m: "; cin >> m;
    // [a]
	cout << factorial(n) * factorial(m) / factorial(n + m) << endl;
    // [b]
	cout << power(m, n);

	return 0;
}
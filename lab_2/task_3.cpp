// [3a]
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");

	double x, y;
    cout << "Введите число x" << endl;
	cout << "x = "; cin >> x;
	if (x <= -2) 
	{
		y = 0;
	}
	else if (x > 10) 
	{
		y = 1 / (x * x + 4 * x - 5);
	}
	else 
	{
		y = x * x + 4 * x + 5;
	}
	cout << "f(x) = " << y;

	return 0;
}

// [3b]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double x, y;
    cout << "Введите число x" << endl;
	cout << "x = "; cin >> x;
	if (x == 1) 
	{
		cout << "f(x) не определено";
		return 0;
	}
	else if (x <= -2) 
	{
		y = 0;
	}
	else if (x > 0) 
	{
		y = 1 / (x * x + 4 * x - 5);
	}
	else 
	{
		y = x * x + 4 * x + 5;
	}
	cout << "f(x) = " << y;

	return 0;
}
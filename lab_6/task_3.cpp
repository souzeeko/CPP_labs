// [3]
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0, "");
	int const n = 7;
	int x[n];
	int y[n];
	int size;
	srand(NULL);
	size = sizeof(x) / sizeof(x[0]);
	cout << "х: ";
	for (int i = 0; i < n; i++)
	{
		x[i] = rand() % 20; 
		cout << x[i] << " ";
	}
	cout << endl;
	cout << "у: ";
	for (int i = 0; i < n; i++)
	{
		y[i] = rand() % 20;
		cout << y[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << ", " << y[i] << ", " << x[i] + y[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i != 6) 
		{
			cout << x[size - i - 1] << ", " << x[i + 1] + y[i] << " ";
		}
		else
		{
			cout << x[size - i - 1] << ", " << x[0] + y[i] << " ";
		}
	}

	return 0;
}

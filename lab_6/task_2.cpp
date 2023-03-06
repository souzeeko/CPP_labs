// [2]
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	int const n = 8;
	int a[n] = { 0, 1, 1 };
	for (int i = 3; i < n; i++)
	{
		a[i] += a[i - 1] + a[i - 2];
	}
	cout << "Последовательность из чисел Фибоначчи: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}

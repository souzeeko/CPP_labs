#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0, "Russian");

    int n = 0, m = 0, bf;
	int a[3][4];
	// [a]
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << endl;
	int min = a[0][0];
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
				if (a[i][j] == min)
				{
					n = i + 1;
					m = j + 1;
				}

		}
	}
	cout << "Минимальный элемент: " << min << " Номер строки: " << n << " Номер столбца: " << m;
    cout << endl;
	// [b]
	for (size_t i = 0; i < 3; i++)
	{
		bf = a[i][3];
		a[i][3] = a[i][m - 1];
		a[i][m - 1] = bf;
	}
	cout << endl;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (size_t i = 0; i < 3; i++)
	{
		bf = a[i][3];
		a[i][3] = a[i][m - 1];
		a[i][m - 1] = bf;
	}
	// [c] что-то идёт не так
	int x[4];
	for (int i = 0; i <= 3; i++)
	{
		x[i] = 0;
		for (int j = 0; j < 4; j++)
		{
			if (a[j][i] > 0)
			{
				x[i] += a[j][i];
			}
		}
		cout << x[i] << " ";
	}
	cout << endl;
	// [d]
	for (size_t j = 0; j < 4; j++)
	{
		a[0][j] = min;
	}
	cout << endl;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
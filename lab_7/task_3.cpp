// [a]
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0,"Russian");

	int const n = 5;
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			if (j == i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
// [b]
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0,"Russian");

	int const n = 6;
	int a[n][n];
	int k = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			if (j == i)
			{
				a[i][j] = k;
			}
			else if (j > i)
			{
				k -= 1;
				a[i][j] = k;
			}
			else 
			{
				a[i][j] = 0;
			}
		}
		k = n;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
// [c]
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0,"Russian");

	int const n = 5;
	int a[n][n];
	int k = 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			if (j + i == 4)
			{
				a[i][j] = 1;
			}
			else if (j + i > 4)
			{
				a[i][j] = k;
				k++;
			}
			else 
			{
				a[i][j] = 0;
			}
		}
		k = 2;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
// [d]
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(0,"Russian");

	int const n = 8;
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			if (j == i || (j - i) % 2 == 0)
			{
				a[i][j] = 1;
			}

			else 
			{
				a[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
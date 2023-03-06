#include <iostream>
using namespace std;
// [def1]
void def_a()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
// [def2]
void def_b(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)                                
		{
			cout << "*";
		}
		cout << endl;
	}
}
// [def3]
void def_c(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
// [def4]
void chessboard(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int l = 0; l < m; l++)
				{
					if ((i + j) % 2 == 0)
					{
						cout << "*";
					}
					else
					{
						cout << "#";
					}
				}
			}
			cout << endl;
		}
	}
	cout << "\n\n\n";
}
// [main]
int main()
{
	setlocale(0, "Russian");

	int n, m;
	cout << "Введите n: ";
	cin >> n;
	cout << "Введите m: ";
	cin >> m;
    cout << endl;
    // [a]
	cout << "Квадрат 4х4:" << endl;
	cout << endl; def_a();
	cout << endl;
    // [b]
	cout << "Квадрат nxn:" << endl;
	cout << endl; def_b(n);
	cout << endl;
    // [c]
	cout << "Квадрат nхn c отступом m:" << endl;
	cout << endl; def_c(n, m);
	cout << endl;
    // [d]
	cout << "Шахматная доска:" << endl;
	cout << endl; chessboard(n, m);
	return 0;
}
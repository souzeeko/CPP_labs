// [8]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	int n;
	cout << "Задайте размер шахматной доске формата n * n клеток (n - четное число): "; cin >> n;
	for (int i = 1; i <= n * n; i++) 
    {
		if (i / n % 2 == 0 && i % n != 0 || i % n == 0 && i / n % 2 == 1) 
        {
			if (i % 2 == 0) 
            {
				cout << "b ";
			}
			else 
            {
				cout << "w ";
			}
		} 
        if (i / n % 2 == 1 && i % n != 0 || i % n == 0 && i / n % 2 == 0) 
        {
			if (i % 2 == 0) 
            {
				cout << "w ";
			}
			else 
            {
				cout << "b ";
			}
		}
		if (i % n == 0) 
        {
			cout << endl;
		}
	}

	return 0;
}
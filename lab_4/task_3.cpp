// [3]
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");

	int n; double a, s;
	cout << "Введите целое число n: "; cin >> n;                              
	a = 1;
	s = 0;
	for (a; a <= n; a++)
	{
		s += (1 / (2 * a));
	}
	cout << "Сумма равна " << s;
	
    return 0;
}
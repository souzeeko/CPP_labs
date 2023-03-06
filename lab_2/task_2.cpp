// [2ab]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	int N;
    cout << "Введите число N" << endl;
	cout << "N = "; cin >> N;
	if (N == 0) 
	{
		cout << "Нуль" << endl;
	}
	else if (N > 0) 
	{
		cout << "Положительное" << endl;
	}
	else 
	{
		cout << "Отрицательное" << endl;
	} 
    if (N % 2 == 0) 
	{
		cout << "Четное";
	}
	else 
	{
		cout << "Нечетное";
	}
	
	return 0;
}
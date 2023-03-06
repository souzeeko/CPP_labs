// [4abcd]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int a, b, c;
	cout << "Введите первое число" << endl;
	cout << "Первое число: "; cin >> a;
	cout << "Введите второе число" << endl;
	cout << "Второе число: "; cin >> b;
	cout << "Введите третье число" << endl;
	cout << "Третье число: "; cin >> c;

    double S;
	S = 0;
	if (a > 10) 
	{
		S = S + a;
	} 
    if (b > 10) 
	{
		S = S + b;
	} 
    if (c > 10) 
	{
		S = S + c;
	}
	cout << "Сумма чисел, больших 10 равна: " << S << endl;

    double k;
    k = 0;
	if (a % 2 == 0) 
	{
		k = k + 1;
	} 
    if (b % 2 == 0) 
	{
		k = k + 1;
	} 
    if (c % 2 == 0) 
	{
		k = k + 1;
	}
	cout << "Количество четных чисел равно: " << k << endl;

	if (a > b && b > c || c > b && b > a) 
	{
		cout << "Среднее из чисел равно: " << b << endl;
	}
	else if (b > a && a > c || c > a && a > b) 
	{
		cout << "Среднее из чисел равно: " << a << endl;
	}
	else if (a > c && c > b || b > c && c > a) 
	{
		cout << "Среднее из чисел равно: " << c << endl;
	}
    else 
	{
        cout << "Не удалось найти среднее число" << endl;
    }

	if (a == b && a == c) 
	{
		cout << "Числа равны";
	}
	else if (a > b && b > c || b > a && a > c) 
	{
		cout << "Наименьшим является число под номером 3";
	}
	else if (a > c && c > b || c > a && a > b) 
	{
		cout << "Наименьшим является число под номером 2";
	}
	else if (b > c && c > a || c > b && b > a) 
	{
		cout << "Наименьшим является число под номером 1";
	}
	else 
	{
        cout << "Единственного наименьшего числа не существует";
    }

	return 0;
}
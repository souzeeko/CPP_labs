#include<iostream>
using namespace std;
// [def1]
bool ticket(int a, int b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// [def2]
bool ticket(int a[], int size, int b)
{
	int des = 100000, num = 0;
	for (int i = 0; i < size; i++)
	{
		num += a[i] * des;
		des /= 10;
	}
	if (num == b)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
// [def3]
bool ticket(double a, double b, double c)
{
	if (a * 1000 + b == c) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
// [main]
int main() 
{
	setlocale(0, "Russian");

	const size_t R = 6;
	int a, b, tic; int wer[R]{};
	cout << "Введите номер счастливого билета: "; cin >> tic;
	cout << "Проверка билетов " << endl;
	cout << "Введите номер билета одним числом: "; cin >> a;
	if (ticket(a, tic) == true)
	{
		cout << "Это счастливый билет!" << endl;
	}
	else 
	{
		cout << "Это не счастливый билет!" << endl;
	}
	cout << "Вводите номер билета по цифрам " << endl;
	for (int i = 0; i < 6; i++) 
	{
		cout << "Введите цифру: "; cin >> wer[i];
	}
	if (ticket(wer, R, tic) == true)
	{
		cout << "Это счастливый билет!" << endl;
	}
	else 
	{
		cout << "Это не счастливый билет" << endl;
	}
	cout << "Вводите номер билета двумя трехзначными числами " << endl;
	cout << "Введите первое число: "; cin >> a;
	cout << endl << "Введите второе число: "; cin >> b;
	if (ticket(a, b, tic) == true)
	{
		cout << "Это счастливый билет!" << endl;
	}
	else 
	{
		cout << "Это не счастливый билет!" << endl;
	}

	return 0;
}
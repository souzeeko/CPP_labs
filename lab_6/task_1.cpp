// [1]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	
	int a[10];
	int a2[10] = { -2, 4, 3, -7, 0, 12, 9, -2, 4, 2 };
	int sr, size, sum = 0, count = 0;
	size = sizeof(a) / sizeof(a[0]);
    cout << "Введите числа массива: ";
    for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << "Второй по порядку элемент: " << a[1] << endl;
	cout << "Предпоследний элемент массива: " << a[size - 2] << endl;
	cout << "Элементы с нечетными индексами: ";
	for (int i = 1; i < 10; i += 2)
	{
		cout << a[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		count++;
		sum += a[i];
	}
	sr = sum / count;
	cout << endl << "Среднее арифметическое чисел в массиве: " << sr << endl;
	for (int i = 0; i < 10; i++)
	{	
		if (a2[i] < 0)
			cout << a[i] << " + (" << a2[i] << ") = " << a[i] + a2[i] << endl;
		else
			cout << a[i] << " + " << a2[i] << " = " << a[i] + a2[i] << endl;
	}
		
	return 0;
}
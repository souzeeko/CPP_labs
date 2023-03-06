#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	int n, sum = 0, mult = 0;
	cout << "Введите предпочитаемое кол-во эллементов в массиве: "; cin >> n;
	int *a = new int[n], *b = new int[n];
    cout << endl << "Заполните массив числами:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> *(a + i);
	}
    // [a]
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > 0)
		{
			sum += *(a + i);
		}
	}
	cout << endl << "Сумма положительных элементов массива: " << sum << endl;              
	// [b]
    cout << endl << "Новый массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > 0)
		{
			*(b + i) = *(a + i) * 10;
			cout << *(b + i) << " ";
		}
		else
		{
			*(b + i) = *(a + i) / 2;
			cout << *(b + i) << " ";
		}
	}
    cout << endl;
    // [c]
	for (int i = 0; i < n; i++)
	{
		mult += (*(a + i)) * (*(b + i));
	}
	cout << endl << "Скалярное произведение массивов: " << mult;

	return 0;
}
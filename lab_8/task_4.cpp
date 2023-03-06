#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	int n, multy = 1; int count = 0;
	cout << "Укажите размерность квадратной матрицы: "; cin >> n;
	int **matrix = new int*[n], *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[i + 1];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
    // [a]
    cout << endl << "Массив:" << endl;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (matrix[i][j] == 0)
			{
				count += 1;
			}
		}
        *(a + j) += count;
        cout << *(a + j) << " "; // почему-то массив получается больше матрицы на 1 индекс
		count = 0;
	}
    cout << *a << endl;
    // [b]
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (i == j)
			{
				multy *= matrix[i][j];
			}
		}
	}
	cout << endl << "Произведение диагональных элементов: " << multy;
    // [c]
    // for (int i = 0; i < n; j++)
	// {
	// 	for (int j = i; i < n; i++)   
    // не понял, как взять элементы выше основной диагонали, есть задумка, но тогда берутся элементы и выше, и ниже

    return 0;
}
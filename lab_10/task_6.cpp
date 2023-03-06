#include<iostream>
#include<cmath>
using namespace std;
// [def1]
double sr(int a, int b) 
{
	return (a + b) / 2.0;
}
// [def2]
double sr(int a, int b, int c) 
{
	return (a + b + c) / 3.0;
}
// [def3]
double sr(double a, double b, double c, double d) 
{
	return(a + b + c + d) / 4.0;
}
// [def4]
double sr(double* a,int n) 
{
	double sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += a[i];
	}
	sum = sum / n;
	delete[] a;
	return sum;
}
// [main]
int main() 
{
	setlocale(0, "Russian");
    
	int a, b, c,d,n; double* A;
    // [a]
	cout << "Введите два числа: "; 
	cin >> a >> b;
	cout << "Среднее арифметическое этих чисел: " << sr(a, b) << endl;
    // [b]
	cout << "Введите три числа: "; 
	cin >> a >> b >> c;
	cout << "Среднее арифметическое этих чисел: " << sr(a, b, c) << endl;
    // [c]
	cout << "Введите 4 числа: "; 
	cin >> a >> b >> c >> d;
	cout << "Среднее арифметическое этих чисел: " << sr(a, b, c, d) << endl;
    // [d]
	cout << "Введите кол-во элементов: "; 
	cin >> n;
	A = new double[n];
	for (int i = 0; i < n; i++) 
	{
		cout << "Введите число: "; 
		cin >> A[i];
	}
	cout << "Среднее арифметическое этих чисел: " << sr(A, n) << endl;
    delete A;

	return 0;
}

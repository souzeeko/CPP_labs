#include <iostream>
using namespace std;
// [def1]
double faren(double a) 
{
	return 9.0 / 5.0 * a + 32;
}
// [def2]
double kel(double a) 
{
	return a + 273;
}
// [def3]
void far_kel(double a, double& b, double& c) 
{
	b = 9.0 / 5.0 * a + 32;
	c = a + 273;
}
// [main]
int main()
{
	setlocale(0, "Russian");
    
	double a, a1, b, c, K, F;
	cout << "Введите два значения в цельсиях: ";
	cin >> a >> a1;
	b = faren(a);
	cout << endl << "Значение первой температуры в Фаренгейтах: " << b;
	c = kel(a);
	cout << endl << "Значение первой температуры в Кельвинах: " << c;
	far_kel(a1, K, F);
	cout << endl << "Значение второй температуры в Фаренгейтах и Кельвинах: " << K << " и " << F;

	return 0;
}
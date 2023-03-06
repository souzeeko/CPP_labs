// [6]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");
    
	double x, y;
    cout << "Введите координату x" << endl;
	cout << "x = "; cin >> x;
    cout << "Введите координату y" << endl;
	cout << "y = "; cin >> y;
	if (pow(x, 2) + pow(y, 2) <= 4) 
	{
		cout << "10 очков";
	}
	else if (pow(x, 2) + pow(y, 2) <= 16) 
	{
		cout << "5 очков";
	}
	else 
	{
		cout << "0 очков";
	}

	return 0;
}
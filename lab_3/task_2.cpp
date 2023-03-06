// [2a]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double a, b, c, r, z;
	cout << "Введите длину / ширину / высоту коробки (через пробел)" << endl; 
    cin >> a >> b >> c;
	cout << "Введите радиус / высоту торта (через пробел)" << endl; 
    cin >> r >> z;
	if (r < a && r < b && z < c)
    {
		cout << "Торт помещается";
    }
	else
    {
		cout << "Торт не помещается";
    }

	return 0;
}

// [2b]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int X, Y, Z, a, b;
	cout << "Введите длину / ширину / высоту кирпича (через пробел)" << endl;
	cin >> X >> Y >> Z;
	cout << "Введите длину / ширину отверстия (через пробел)" << endl;
	cin >> a >> b;
	if (X <= a && Y <= b || X <= a && Z <= b || Y <= a && Z <= b || Y <= b && Z <= a || X <= b && Y <= a || X <= b && Z <= a)
    {
		cout << "Кирпич проходит через отверстие";
    }
    else
    {
		cout << "Кирпич не проходит через отверстие";
    }
    
    return 0;
}
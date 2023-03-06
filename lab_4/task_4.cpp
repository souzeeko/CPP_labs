// [4a]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, s; int n;
	cout << "Введите число x: "; cin >> x;                   
	cout << "Введите кол-во повторений: "; cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = cos(x + s);
    }
	cout << "Значение выражения: " << s;

    return 0;
}

// [4b]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, s; int n;
	cout << "Введите число x: "; cin >> x;                   
	cout << "Введите кол-во повторений: "; cin >> n;
	s = 0;
    for (int i = 1; i <=n; i++)
    {
        s = sqrt(x + s);
    }
    cout << "Значение выражения: " << s;

    return 0;
}
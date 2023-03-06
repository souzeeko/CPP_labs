// [5]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "Russian");

    double e, S, c, z;
    cout << "Введите epsilon" << endl;
    cout << "Epsilon = "; cin >> e;
    S = 0; c = 1; z = 1.0;
    while (fabs(c / z) >= e)
    {
        S += c / z;
        c = -c;
        z = z + 2;
    }
    cout << "Сумма равна: " << S;

    return 0;
}
// [3abcde]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "Russian");

    double x, y, multy;
    char task;
    bool A;
    cout << "Введите координату x" << endl;
    cout << "x = "; cin >> x;
    cout << "Введите координату y" << endl;
    cout << "y = "; cin >> y;
    cout << "Введите букву задания (a / b / c / d / e)" << endl;
    cin >> task;
    switch(task)
    {
        case 'a':
        A = ((x <= 0 && x >= -2) && (y <= 1 && y >= 0));
        break;
    case 'b':
        multy = pow(x, 2) + pow(y, 2);
        A = (y > 0 && multy <= 25);
        break;
    case 'c':
        multy = pow(x, 2) + pow(y, 2);
        A = (x > 0 && (multy >= 9 && multy <= 36));
        break;
    case 'd':
        A = ((x >= 0 && y >= 0) && (-2 * x + 2 >= y));
        break;
    case 'e':
        multy = pow(x, 2) + pow(y, 2);
        A = (( (y >= 0) && (multy <= 64 && (x > 0 || (x < 0 && y > 4)))) ||
         ((y < 0) && (y >= (fabs(x) - 8) / 2)));
        break;
    default:
        cout << "Неверные данные";
    }
    if (A)
    {
        cout << "Точка принадлежит данной плоскости";
    }
    else
    {
        cout << "Точка не принадлежит данной плоскости";
    }

    return 0;
}
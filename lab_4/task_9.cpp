// [9]
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");

    int a, count, maximum;
    cout << "Введите число a: "; cin >> a;
    count = 0; maximum = a;
    while (a != 0)
    {
        if (a > maximum)
        {
            maximum = a;
            count = 1;
        }
        else if (a == maximum)
        {
            count += 1;
        }
        cout << "Введите следущее число a: "; cin >> a;
    }
    cout << "Кол-во чисел, равных максимальному: " << count;

    return 0;
}
// [6]
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");

    int digit, count, c2, flag;
    count = 0; c2 = 0; flag = 0;
    cout << "Начните диалог введя любое целое число" << endl;
    cout << "Введите число: ";
    while (flag != 1)
    {
        cin >> digit;
        ++count;
        if (digit % 2 == 0)
        {
            c2 += 1;
        }
        cout << "Желаете закончить диалог? (если да, введите 1 / если нет, введите 0): "; cin >> flag;
    }

    cout << "Кол-во введённых вами чисел: " << count << endl;
    cout << "Кол-во введённых вами чётных чисел: " << c2;
    
    return 0;
}
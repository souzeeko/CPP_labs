#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
// [def]
float def(float x)
{
    if (x < 0)
    {
        return 2 + 1 / 3;
    }

    else if (x > M_PI * 2)
    {
        return (1 + pow(x, 3)) / (2 * x);
    }

    else
    {
        return (pow(x, 2) - 3);
    }
}
// [main]
int main() 
{   
    setlocale(0, "Russian");
    // [a]
    float a, b;
    cout << "Введите числа a, b: ";
    cin >> a >> b;
    cout << 12.5 + def(2) - def(4) * def(10) + def(a) - def(b) + def(a * b) << endl;
    // [b]
    float x[7], y[7];
    float max = INT32_MIN;
    int count = 0; 
    cout << "Введите 7 элементов: ";
    for (int i = 0; i < 7; i++) 
    {
        cin >> x[i];
        y[i] = def(x[i]);

        if (y[i] < 0)
        {
            count += 1;
        }

        if (y[i] > max)
        {
            max = y[i];
        }
    }
    cout << count << " " << max << endl;

    return 0;
}
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    if (x < - 4)
    {
        return ((pow(x, 2) - 1 / x) / 3 * x) * ((x + 3) / (1 + x));
    }
    else if (x >= -4 && x < 6 * M_PI)
    {
        return pow((x - 5), 2) * pow(sin(2 * x), 2);
    }
    else
    {
        return 11 * (2 / 3);
    }
}

int main()
{
    // [results in 2 arrays]

    int n; cout << "input n: "; cin >> n;
    double *xs = new double [n];
    double *ys = new double [n];
    cout << "input xs in split: ";
    for (int i = 0; i < n; i++)
    {
        cin >> xs[i];
        ys[i] = f(xs[i]);
    }
    cout << "results in arrays: " << xs << " " << ys << endl;

    // [avg in [a, b]]

    double a, b, avg = 0, summ = 0;
    cout << "input a: "; cin >> a;
    cout << "input b: "; cin >> b;
    for (int i = 0; i < n; i++)
    {
        if (ys[i] >= a && ys[i] <= b)
        {
            summ += ys[i];
        }
    }
    avg = summ / n;
    cout << "avg in [a, b]: " << avg << endl;

    // [dots in area]

    // for (int i = 0; i < n; i++)
    // {
    //     bool result = false;
    //     if (xs[i] <= 0 && ys <= 0)
    //     {
    //         result = xs[i] * xs[i] + ys[i] * ys[i] <= 64;
    //     }
    //     else if (xs >= 0)
    //     {
    //         result = ys[i] >= xs[i] - 8;
    //     }

    //     // [no time]
    //     else if (xs[i] <= 0 && ys[i] >= 0)
    //     {
            
    //     }

    // }

    return 0;
}
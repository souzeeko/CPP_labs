// [1a]
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");

    double tC = 0, tF;
    cout << "Значения температуры в формате градусы Цельсия / градусы Фаренгейта:" << endl;
    while (tC <= 100)
    {
        cout << tC;
        tF = tC * 9 / 5 + 32;
        tC += 10;
        cout << " / " << tF << endl;
    }

    return 0;
}

// [1b]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    
    double x, y, step = 0;
    cout << "Зависимость y от x:" << endl;
    do
    {
        x = step;
        y = log(x +1) * sin(x);
        cout << "y = " << y << ", при x = " << x << endl;
        step += 0.5;
    } while (step <= 5);

    return 0;
}

// [1c]
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "Russian");

    double x, y;
    cout << "Зависимость y от x:" << endl;
    for (double step = 0; step < M_PI * 2 + M_PI / 6; step += M_PI / 6)
    {
        x = step;
        y = cos(x);
        cout << "y = " << y << ", при x = " << x << endl;
    }

    return 0;
}

// [1d]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "Russian");

    double x, y;
    cout << "Зависимость y от x:" << endl;
    for (double step = -1.5; step <= 1.5; step += 0.25)
    {
        x = step;
        if (x > 1)
        {
            y = 1 + sqrt(fabs(cos(x)));
            cout << "y = " << y << ", при x = " << x << endl;
        }
        else if (x >= -0.5 && x <= 1)
        {
            y = x + 1;
            cout << "y = " << y << ", при x = " << x << endl;
        }
        else
        {
            y = 1 - pow(x, 2);
            cout << "y = " << y << ", при x = " << x << endl;
        }
    }
    
    return 0;
}
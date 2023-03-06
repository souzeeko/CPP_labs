// [a]
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 1.5, y = M_PI, *px = &x, *py = &y;
    cout << x << " " << y << endl;
    cout << px << " " << py << endl;
    cout << fabs(px - py) << endl;
    cout << sizeof(x) << " " << sizeof(y);

    return 0;
}

// [b]
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a[] = {1.5, M_PI, -1.5, 3.0, -2.5};
    cout << a << " " << a + 1 << " " << a + 4 << endl;
    cout << fabs(a - (a + 1)) << endl;
    cout << *a << " " << *(a + 1) << " " << *(a + 2) << " " << *(a + 3) << " " << *(a + 4) << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(a + i) << " ";
    }

    return 0;
}

//[c]
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double *x = new double, *y = new double;
    *x = 1.5 + M_PI; *y = 1.5 - M_PI;
    cout << *x << " " << *y << endl;
    cout << x << " " << y << endl;
    cout << fabs(x - y);
    delete x; delete y;

    return 0;
}
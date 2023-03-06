#include <iostream>
#include <cmath>
using namespace std;
// [def1]
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
// [def2]
double area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
// [main]
int main()
{
    double r, x1, y1, x2, y2, x3, y3;
    cout << "x1: "; cin >> x1; cout << "y1: "; cin >> y1;
    cout << "x2: "; cin >> x2; cout << "y2: "; cin >> y2;
    // [a]
    r = distance(x1, y1, x2, y2);
    // [b]
    double r_start1, r_start2;
    r_start1 = distance(x1, y1, 0, 0);
    r_start2 = distance(x2, y2, 0, 0);
    // [c]
    double x3, y3;
    cout << "x3: "; cin >> x3; cout << "y3: "; cin >> y3;
    // [d]
    double x4, y4;
    cout << "x4: "; cin >> x4; cout << "y4: "; cin >> y4;

    cout << "r: " << r;
    cout << "r_start1: " << r_start1 << " r_start2: " << r_start2;
    cout << "area: " << area(distance(x1, y1, x2, y2), distance(x2, y2, x3, y3), distance(x3, y3, x1, y1));
    cout << "area: " << area(distance(x1, y1, x2, y2), distance(x2, y2, x3, y3), distance(x3, y3, x1, y1)) + area(distance(x1, y1, x3, y3), distance(x3, y3, x4, y4), distance(x4, y4, x1, y1));

    return 0;
}
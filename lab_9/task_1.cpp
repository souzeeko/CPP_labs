#include <iostream>
#include <cmath>
using namespace std;
// [def1]
double sum(double x, double y)
{
    return x + y;
}
double diff(double x, double y)
{
    return x - y;
}
double mult(double x, double y)
{
    return x * y;
}
// [main]
int main()
{
    double a, b;
    cout << "a: "; cin >> a; cout << "b: "; cin >> b;
    cout << sum(mult(diff(sum(a, b), 2), 5), mult(1000, a));

    return 0;
}
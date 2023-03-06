#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int *x =  new int, *y = new int, *p = new int, *s = new int;
    cin >> *x; cin >> *y;
    *p = (*x + *y) / 2;
    *s = *x * *y;
    cout << p << " " << s;
    delete x; delete y;

    return 0;
}
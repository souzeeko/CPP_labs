#include <iostream>
using namespace std;
// [def1]
int counter(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return counter(n / 10) + 1;
}
// [def2]
int sum(int n)
{
    if (n < 10)
    {
        return n;
    }
    return sum(n / 10) + n % 10;
}
// [def3]
int rewright(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return rewright(n / 2) + ...;
}
// [main]
int main()
{
    int n;
    cin >> n;
    cout << counter(n) << endl;
    cout << sum(n);
    return 0;
}
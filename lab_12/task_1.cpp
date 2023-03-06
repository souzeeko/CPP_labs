#include <iostream>
using namespace std;
// [def]
void result(int n)
{
    if (n == 0)
    {
        return;
    }
    result(n - 1);
    cout << n << " | " << n * n << endl;

}
// [main]
int main()
{
    int n;
    cin >> n;
    result(n);

    return 0;
}
#include <iostream>
using namespace std;
// [def]
void def()
{
    int x;
    cin >> x;
    if (x == 0)
    {
        return;
    }
    def();
    cout << x << " | ";
}
// [main]
int main()
{
    cout << "Введите числа: ";
    def();

   return 0;
}
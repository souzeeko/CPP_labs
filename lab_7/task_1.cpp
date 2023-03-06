// [abc]
#include <iostream>
using namespace std;
int main() 
{
    const int n = 2, m = 3; int sum2 = 0, sum29 = 0, mult29 = 1;
    int a[n][m];
    srand(time(0));
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            a[i][j] = rand() % (30 + 1);
            if (a[i][j] > 1 && a[i][j] < 10)
            {
                sum29 += a[i][j]; mult29 *= a[i][j];
            }
            sum2 += a[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    if (sum2 % 2 == 0)
    {   
        cout << "Сумма элементов является чётной";
    }
    else
    {
        cout << "Сумма всех элементов является нечётной" << endl;
    }
    if (mult29 == mult29)
    {
        mult29 = 0;
    }
    cout << "Сумма элементов промежутка [2; 9]: " << sum29 << endl << "Произведение элементов промежутка [2; 9]: " << mult29;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
// [def]
void data_edit(string a)
{
    int count_S = 0, count_s = 0, count_digits = 0, count_uppercase = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'S')
        {
            count_S += 1;
            count_uppercase += 1;
        }
        else if (a[i] == 's')
        {
            count_s += 1;
        }
        else if (isdigit(a[i]))
        {
            count_digits += 1;
        }
        else if (isalpha(a[i]) && isupper(a[i]))
        {
            count_uppercase += 1;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'a')
        {
            a[i] = 'A';
        }
        else if (a[i] == '1')
        {
            a[i] = '5';
        }
    }
    // [a]
    cout << "S in a: " << count_S << ", " << "s in a: " << count_s << ", ";
    cout << "S and s in a: " << count_S + count_s << endl;
    // [b]
    cout << "Digits in a: " << count_digits << endl;
    // [c]
    cout << "Uppercase symbols in a: " << count_uppercase << endl;
    // [d]
    cout << "Edited string: " << a;
}
// [main]
int main()
{
    string whatever; cout << "Input string: "; cin >> whatever;
    data_edit(whatever);

    return 0;
}
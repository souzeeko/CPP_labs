// [5a]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");

    int amt, red;
    cout << "Введите количество собранных Джонни грибов" << endl;
    cin >> amt;
    cout << "Джонни собрал ";
    red = amt % 10;
    if (red == 1)
    {
        cout << amt << " гриб";
    }
    else if (red == 2 || red == 3 || red == 4)
    {
        cout << amt << " гриба"; 
    }
    else
    {
        cout << amt << " грибов";
    }

    return 0;
}

// [5b]
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "Russian");

    int ud, um, uy;
    cout << "Введите дату своего рождения" << endl;
    cout << "День месяца: "; cin >> ud;
    cout << "Месяц (число): "; cin >> um;
    cout << "Год: "; cin >> uy;

    int td, tm, ty;
    cout << "Введите сегодняшнюю дату" << endl;
    cout << "День месяца: "; cin >> td;
    cout << "Месяц (число): "; cin >> tm;
    cout << "Год: "; cin >> ty;

    int difd, difm, dify;
    dify = ty - uy;
    if (tm < um)
    {
        dify = dify - 1;
    }
    else if (tm == um)
    {
        if (td < ud)
        {
            dify = dify - 1;
        }
    }

    int red;
    cout << "Вам ";
    red = dify % 10;
    if (red == 1)
    {
        cout << dify << " год";
    }
    else if (red == 2 || red == 3 || red == 4)
    {
        cout << dify << " года"; 
    }
    else
    {
        cout << dify << " лет";
    }

    return 0;
}
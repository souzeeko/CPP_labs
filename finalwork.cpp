// [task 1]

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

// [def]

double f(double x)
{
    if (x <= - 3)
    {
        return 2 + (1 / 3);
    }
    else if (x > -3 && x < 3)
    {
        return (pow(x, 2) - 2) * cos((M_PI * (x -1)) / (2 * x));
    }
    else
    {
        return ((x + 3) / (x - (1 / pow(x - 1, 3))));
    }
}

int main()
{
    int n, count = 0; double x, a, b, sum_ab = 0;
    cout << "input a: "; cin >> a;
    cout << "input b: "; cin >> b;
    cout << "input n: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "input x: "; cin >> x;
        cout << " if x " << x << " result is " << f(x) << endl;

        if (x >= a && x <= b)
        {
            sum_ab += f(x);
        }

        bool result = false;
        if (x > 0 && f(x) > 0)
        {
            result = x * x + f(x) * f(x) <= 36;
        }
        else if (x > 0 && f(x) < 0)
        {
            result = f(x) >= -6 + x;
        }
        else if (x < 0 && f(x) > 0)
        {
            result = x <= -3 + f(x);
        }
        else
        {
            result = f(x) <= 3 + x;
        }
        if (result)
        {
            count += 1;
        }
    }
    cout << sum_ab << endl;
    cout << count;

    return 0;
}

// [task 2]

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class figure
{
private:
	int h;
    int side_len;
	string name = "Dadecaedr";
public:
    figure(){}
    figure(int h, int side_len)
    {
        this -> h = h;
        this -> side_len = side_len;
    }
    void set_h(int h)
    {
        this -> h = h;
    }
    void set_side_len(int side_len)
    {
        this -> side_len = side_len;
    }
    int get_h()
    {
        return h;
    }
    int get_side_len()
    {
        return side_len;
    }
    void input()
	{
		cout << "input h: "; cin >> h;
		set_h(h);
		cout << "input side_len: "; cin >> side_len;
		set_side_len(side_len);
	}
    double S()
    {
        h = get_h();
        side_len = get_side_len();
        double S = (pow(side_len, 2) * sqrt(3));
        cout << "figure full sqare is " << S << endl;
        return S;
    }
    double V()
    {
        h = get_h();
        side_len = get_side_len();
        double V = (pow(side_len, 3) * sqrt(2)) / 12;
        cout << "figure volume is " << V << endl;
        return V;
    }
    void print()
    {
        cout << endl << name << endl;
    }
};

int main()
{
    figure arr[3];
    double S, V, sum_S = 0, sum_V = 0;
    for (int i = 0; i < 3; i++)
    {
        arr[i].input();

        sum_S += arr[i].S();
        sum_V += arr[i].V();
    }
    cout << endl << sum_S;
    // a.input();
    // a.print();

    return 0;
}
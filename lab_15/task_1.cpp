#include <iostream>
using namespace std;
// [class]
class RNum
{
    public:
        void set_p(int p);
        int get_p();
        void set_q(int q);
        int get_q();
        void print();
    private:
        int p, q;

};
// [main]
int main()
{
    setlocale(0, "Russian");

    RNum x, x1;
    int p, q, p1, q1;
    cout << "Введите числитель: "; cin >> p;
    cout << "Введите знаменатель: "; cin >> q;
    x.set_p(p);
    x.set_q(q);
    cout << "Введите числитель: "; cin >> p1;
    cout << "Введите знаменатель: "; cin >> q1;
    x1.set_p(p1);
    x1.set_q(q1);
    // [a]
    x.print();
    x1.print();
    // [b]
    cout << x.get_p() << endl << x1.get_p() << endl;
    // [c]
    cout << x.get_q() + x1.get_q() << endl;
    // [d]
    if (x.get_p() > x1.get_p())
    {
        x.print();
    }
    else
    {
        x1.print();
    }

    return 0;
}
// []
void RNum::set_p(int p)
{
    this -> p = p;
}
// []
int RNum::get_p()
{
    return p;
}
// []
void RNum::set_q(int q)
{
    if (q == 0)
    {
        cout << "Знаменатель не может быть равен нулю!";
    }
    else
    {
        this -> q = q;
    }
}
// []
int RNum::get_q()
{
    return q;
}
// []
 void RNum::print()
{
    cout << p << "/" << q << endl;
}
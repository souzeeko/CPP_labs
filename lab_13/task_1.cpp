#include <iostream>
#include <string>
using namespace std;
// [main]
int main()
{
    string name, surname, lastname, name_0, surname_0, lastname_0;
    cout << "Input your full name: ";
    cin >> name >> surname >> lastname;
    name_0 = name[0];
    surname_0 = surname[0];
    lastname_0 = lastname[0];
    cout << "Your data:" << endl;
    cout << name + " " + surname + " " + lastname << endl;
    cout << name_0 + "." + surname_0 + "." + lastname_0 + "." << endl;
    cout << name + " " + surname_0 + "." + lastname_0 + ".";

    return 0;
}
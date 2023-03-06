#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void shapka()
{
    cout << string(131, '-') << endl;
    cout << " №  " << '|' << left << setw(57) << "слово" << '|' << left << setw(11) << "" << '|' 
    << left << setw(23) << "" << left << setw(30) << "Количество информации" << endl;
    cout << string(131, '-') << endl;
    cout << left << setw(4) << "" << '|' << left << setw(57) << "" << '|' << left << setw(11) << "" << '|' 
    << left << setw(11) << "кол-во" << '|' << left << setw(14) << "байт, размер" << '|' << left << setw(14) << "бит,"
    << '|' << left << setw(14) << "бит," << endl;
    cout << left << setw(4) << "" << '|' << left << setw(57) << "" << '|' << left << setw(11) << "палиндром" << '|' 
    << right << setw(11) << "символов" << '|' << right << setw(14) << "в программе" << '|' << right << setw(14) << "по Хартли"
    << '|' << right << setw(14) << "по Шеннону" << endl;
    cout << string(131, '-') << endl;
}

int main()
{
    setlocale(0, "Russian");
    shapka();
    fstream file;
    string txt;
    string* arrr = new string();
    int n = 0;
	file.open("for_table_test.txt", ios::in);
    if (file.is_open())
    {
        char c; int i = 0; char* arr = new char();
            while (file.get(c)) 
            {
                arr[i] = c;
                i++;
            }
        file.close(); arr[i] = '\0'; cout << arr;
    }
    
    // { 
    //    while(getline(file, txt))
    //    { 
    //     cout << txt << "\n";
    //     n++;
    //    }
    //    file.close();
    // }

    return 0;
}
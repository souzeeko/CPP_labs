// [7]
#include <iostream>
using namespace std;
int main()
{
   setlocale(0, "Russian");

   float a, b;
   char operation;
   cout << "Введите число a" << endl;
   cout << "a = "; cin >> a;
   cout << "Введите число b" << endl;
   cout << "b = "; cin >> b;
   cout << "Введите арифметическую операцию (+, -, *) " << endl;
   cin >> operation;
   switch (operation)
   {
   case '+': 
      cout << a << " " << operation << " " << b << " = " << a + b; 
      break;
   case '-': 
      cout << a << " " << operation << " " << b << " = " << a - b; 
      break;
   case '*': 
      cout << a << " " << operation << " " << b << " = " << a * b; 
      break;
   default: 
      cout << "Неверные данные";
   }

   return 0;
}
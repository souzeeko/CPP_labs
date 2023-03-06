// [8ab]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	int day, month, year;
	cout << "Введите дату" << endl;
	cout << "День: "; cin >> day;
	cout << "Месяц (номер): "; cin >> month;
	cout << "Год: "; cin >> year;
	cout << day << " ";
	switch (month) 
    {
	case 1: 
		cout << "Января "; 
		break;
	case 2: 
		cout << "Февраля "; 
		break;
	case 3: 
		cout << "Марта "; 
		break;
	case 4: 
		cout << "Апреля "; 
		break;
	case 5: 
		cout << "Мая "; 
		break;
	case 6: 
		cout << "Июня "; 
		break;
	case 7: 
		cout << "Июля "; 
		break;
	case 8: 
		cout << "Августа "; 
		break;
	case 9: 
		cout << "Сентября "; 
		break;
	case 10: 
		cout << "Октября "; 
		break;
	case 11: 
		cout << "Ноября "; 
		break;
	case 12: 
		cout << "Декабря "; 
		break;
	default: 
		cout << "Неверные данные";
	}
	cout << year << endl;

	if (month == 1 || month == 2 || month == 12) 
    {
		cout << "Зима";
	} 
    if (month == 3 || month == 4 || month == 5) 
    {
		cout << "Весна";
	} 
    if (month == 6 || month == 7 || month == 8) 
    {
		cout << "Лето";
	} 
    if (month == 9 || month == 10 || month == 11) 
    {
		cout << "Осень";
	}
	
	return 0;
}
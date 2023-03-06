#include <iostream>
using namespace std;
// [def1]
bool data(int& day, int& month, int& year) 
{
	cout << "Введите день: " << endl;
	cin >> day;
	cout << "Введите месяц: " << endl;
	cin >> month;
	cout << "Введите год: " << endl;
	cin >> year;
	if (day >= 1 and day <= 31 and month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) 
	{
		return true;
	}
	else if (day >= 1 and day <= 30 and month == 4 or month == 6 or month == 9 or month == 11 )
	{
		return true;
	}
	else if (month == 2 and day >= 1 and day <= 29 and year % 400 == 0 or year % 4 == 0 and year % 100 != 0)
	{
		return true;
	}
	else if (month == 2 and day >= 1 and day <= 28)
	{
		return true;
	}
	else
	{
		cout << "Ошибка введенных данных!"<<endl;
		return false;
	}
}
// [def2]
bool data_1(int& day, int& month, int& year) 
{
	if (day >= 1 and day <= 31 and month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
	{
		cout << day;
		if (month == 12) 
		{ 
			cout << " декабря "; 
		}
		if (month == 10)
		{ 
			cout << " октября "; 
		}
		if (month == 8) 
		{
			cout << " августа ";
		}
		if (month == 7) 
		{
			cout << " июля ";
		}
		if (month == 5) 
		{
			cout << " мая ";
		}
		if (month == 3) 
		{
			cout << " марта ";
		}
		if (month == 1) 
		{
			cout << " января ";
		}
		cout << year << " года";
		return true;
	}
	else if (day >= 1 and day <= 30 and month == 4 or month == 6 or month == 9 or month == 11) 
	{
		cout << day;
		if (month == 11) 
		{
			cout << " ноября ";
		}
		if (month == 9) 
		{
			cout << " сентября ";
		}
		if (month == 6) 
		{
			cout << " июня ";
		}
		if (month == 4) 
		{
				cout << " апреля ";
		}
		cout << year << " года";
		return true;
	}
	else if (month == 2 and day >= 1 and day <= 29 and year % 400 == 0 or year % 4 == 0 and year % 100 != 0)
	{
		cout << day << " февраля " << year << " года";
		return true;
	}
	else if (month == 2 and day >= 1 and day <= 28) 
	{
		cout << day << " февраля " << year << " года";
		return true;
	}
	else 
	{
		cout << "Ошибка введенных данных!" << endl;
		return false;
	}
}
// [def3]
bool data_2(int& day, int& month, int& yaer, int& day1, int& mon1, int& year1,int& let) 
{
	int d = day, m = month, y = yaer, d1 = day1, m1 = mon1, y1 = year1, age1 = 0;
	for (int i = y1; i < y; i+=1)
	{
		age1++;
	}
	if (d >= d1 and m >= m1 ) 
	{
		let = age1;
	}
	else
	{
		if (age1 - 1 >= 0)
		{
			let = age1 - 1;
		}
		else 
		{
			let = 0;
		}
	}
	return true;
}
// [main]
int main()
{
	setlocale(0, "Russian");

	int day, month, year, day1, mon1, year1, age1 = 0, age2 = 0, age3 = 0;
    // [ab]
	cout << "Введите сегодняшнюю дату" << endl;
	data(day, month, year);
	cout << endl << "Введите чей либо день рождения" << endl;
	data(day1, mon1, year1);
	if (day == day1 and month == mon1)
	{
		cout << "С днем рождения!" << endl;
	}
	if (day == 1 and month == 1)
	{
		cout << "С НОВЫМ " << year << " ГОДОМ!" << endl;
	}
	cout << "===============================" << endl;
    // [cd]
	cout << "Введите сегодняшний день" << endl;
	data(day, month, year);
	data_1(day, month, year);
	cout << endl;
	cout << "Введите день рождения Васи" << endl;
	data(day1, mon1, year1);
	data_1(day1, mon1, year1);
	data_2(day, month, year, day1, mon1, year1, age1);
	cout << endl;
	cout << "Введите день рождения Пети" << endl;
	data(day1, mon1, year1);
	data_1(day1, mon1, year1);
	data_2(day, month, year, day1, mon1, year1, age2);
	cout << endl;
	cout << "Введите день рождения Коли" << endl;
	data(day1, mon1, year1);
	data_1(day1, mon1, year1);
	data_2(day, month, year, day1, mon1, year1, age3);
	cout << endl;
	cout << "Полный возраст Васи: " << age1 << endl;
	cout << "Полный возраст Пети: " << age2 << endl;
	cout << "Полный возраст Коли: " << age3 << endl;
	if (age1 > age2 and age1 > age3)
	{
		cout << "Самый сатрший: Вася" << endl;
	}
	else if (age2 > age1 and age2 > age3)
	{
		cout << " Самый сатрший: Петя " << endl;
	}
	else if (age3 > age1 and age3 > age2)
	{
		cout << " Самый сатрший: Коля" << endl;
	}
	else if (age3 == age1 and age3 > age2)
	{
		cout << "Самые сатршие: Коля и Вася" << endl;
	}
	else if (age3 == age2 and age3 > age1)
	{
		cout << "Самые сатршие: Коля и Петя" << endl;
	}
	else if (age1 == age2 and age1 > age3)
	{
		cout << "Самые сатршие: Вася и Петя" << endl;
	}
	else
	{
		cout << "Все одного возраста" << endl;
	}

	return 0;
}
// [1b]
#include <iostream>
using namespace std;
int main() 
{
	setlocale(0, "Russian"); 

	int dM, dW, Na;
	cout << "Введите дату" << endl; 
	cout << "День месяца: "; cin >> dM; 
	cout << "Номер дня недели: "; cin >> dW;
	cout << "Проживаете ли вы в Италии? да - 1 / нет - 0: "; cin >> Na;
	if (1 == Na)
    {
		if (dW == 5 && dM == 17)
        {
			cout << "Неудачный день";
        }
    }
	else
    {
		if (dM == 13)
        {
			if (dW == 5 || dW == 2)
            {
				cout << "Неудачный день"; 
            }
        }
    }
	return 0;
}
// [1b]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double a1, b1, c1, a2, b2, c2;
	cout << "Введите стороны первого прямоугольника" << endl;
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "Введите стороны второго прямоугольника" << endl;
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;

    double s1, s2;
	s1 = a1 * b1;
	s2 = a2 * b2;
	if (s1 == s2) 
	{
		cout << "Площади прямоугольников равны";
    }
	else if (s1 > s2) 
	{
		cout << "Площадь первого прямоугольника больше";
    }
	else 
	{ 
		cout << "Площадь второго прямоугольника больше";
    }

    return 0;
}

// [1c_1]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double a1, b1, a2, b2, a3, b3;
	cout << "Введите стороны первого прямоугольника" << endl;
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "Введите стороны второго прямоугольника" << endl;
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "Введите стороны третьего прямоугольника" << endl;
	cout << "a3 = "; cin >> a3;
	cout << "b3 = "; cin >> b3;

    double s1, s2, s3;
	s1 = a1 * b1;
	s2 = a2 * b2;
	s3 = a3 * b3;
	if (s1 > s2 && s1 > s3) 
	{
		cout << "Наибольшая площадь у первого прямоугольника, s1 = " << s1;
	}
	else if (s2 > s1 && s2 > s3) 
	{
		cout << "Наибольшая площадь у второго прямоугольника, s2 = " << s2;
	}
	else 
	{
		cout << "Наибольшая площадь у третьего прямоугольника, s3 = " << s3;
	}

    return 0;
}

// [1c_2]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double a1, b1, a2, b2, a3, b3;
	cout << "Введите стороны первого прямоугольника" << endl;
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "Введите стороны второго прямоугольника" << endl;
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "Введите стороны третьего прямоугольника" << endl;
	cout << "a3 = "; cin >> a3;
	cout << "b3 = "; cin >> b3;

    double s1, s2, s3;
	s1 = a1 * b1;
	s2 = a2 * b2;
	s3 = a3 * b3;

    double s, S;
	s = (s1 > s2 ? s1 : s2);
    S = (s > s3 ? s : s3);
	cout << "max площадь = " << S;
    
	return 0;
}

// [1c_3]
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");

	double a1, b1, a2, b2, a3, b3;
	cout << "Введите стороны первого прямоугольника" << endl;
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "Введите стороны второго прямоугольника" << endl;
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "Введите стороны третьего прямоугольника" << endl;
	cout << "a3 = "; cin >> a3;
	cout << "b3 = "; cin >> b3;

    double s1, s2, s3;
	s1 = a1 * b1;
	s2 = a2 * b2;
	s3 = a3 * b3;

    double s, S;
	s = max(s1, s2);
    S = max(s, s3);
	cout << "max площадь = " << S;

	return 0;
}
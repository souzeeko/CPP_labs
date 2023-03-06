#include <iostream>
#include <string>
using namespace std;
// [main]
int main()
{
	string number; int result = 0;
    cout << "Input number: "; cin >> number;
	for (int i = 0; i < number.size(); i++) 
	{
		switch (number[i])
		{
		case 'M': result += 1000;
			break;
		case 'D': result += 500;
			break;
		case 'C': if (i + 1 < number.size() && (number[i + 1] == 'D' || number[i + 1] == 'M')) result -= 100;
				else result += 100;
			break;
		case 'L': result += 50;
			break;
		case 'X': if (i + 1 < number.size() && (number[i + 1] == 'L' || number[i + 1] == 'C' || number[i + 1] == 'M')) result -= 10;
				else result += 10;
			break;
		case 'V': result += 5;
			break;
		case 'I': if (i + 1 < number.size() && (number[i + 1] == 'V' ||number[i + 1] == 'X' || number[i + 1] == 'C')) result -= 1;
				else result += 1; 
			break;
		}
	}
	cout << result;

	return 0;
}
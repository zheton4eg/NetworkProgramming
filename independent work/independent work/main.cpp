#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	char s;
	cout << "¬ведите простое выражение: "; cin >> a >> s >> b;
	
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '+')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error: no operation." << endl;
	}


}
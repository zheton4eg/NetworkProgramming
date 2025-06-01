#include <iostream>
using namespace std;
//#define CALC1
//#define CALC2
void main()
{

	setlocale(LC_ALL, "Russian");


	double a, b;
	char s;
	cout << "¬ведите выражение: "; cin >> a >> s >> b;



#ifdef CALC1
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '/')
	{
		cout << a << "-" << b << "=" << a / b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else
	{
		cout << "Error: no operation" << endl;
	}

#endif // CALC1

#ifdef CALC2
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default:cout << "Error : no operation" << endl;
		main();

	}
#endif // CALC2


	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	}while (true);






}
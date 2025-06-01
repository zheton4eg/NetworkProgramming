#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define CALCULATING


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef CALCULATING
	int numbone;
	int numbtwo;
	char operation;
	int resoult;

	cout << "введите первое число: "; cin >> numbone;
	cout << "введите операцию: "; cin >> operation;
	cout << "введите второе число: "; cin >> numbtwo;


	if (operation == '+')
		resoult = numbone + numbtwo;
	else if (operation == '-')
		resoult = numbone - numbtwo;
	else if (operation == '*')
		resoult = numbone * numbtwo;
	else if (operation == '/')
		resoult = numbone / numbtwo;
	else if (operation == '%')
		resoult = numbone % numbtwo;



	cout << "\n результат: " << resoult << endl;
#endif // CALCULATING


	double a;
	double b;
	int c;
	double d;
	double last;
	double prelast;
	int intprelast;
	double lastwo;
	double lasthee;
	cout << "¬ведите число: "; cin >> a;
	b = a / 10;
	c = b;
	d = b - c;
	last = d * 10;
	intprelast = prelast = a / 100 ;
	lastwo = c - intprelast * 10;
	lasthee = intprelast / 10
	 cout << b << endl;
	 cout << c << endl;
	 cout << d << endl;
	 cout << last << endl;
	 cout << prelast << endl;
	 cout << intprelast << endl;
	 cout << lastwo << endl;
	 





	

}
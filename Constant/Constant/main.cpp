//Constants
#include <iostream>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "Russian");
	int speed = 0;              // переменное значение
	const int MAX_SPEED = 250;  // постоянное значение
	speed = 80;
	//MAX_SPEED = 280;
	5; //числовая константа типа 'int'
	5u; //числовая константа типа 'unsigned int'
	5l; //числовая константа типа 'long'

	cout << sizeof(5) << endl;
	cout << typeid(5ull).name() << endl;
	//typeid(value).name();
	//value - это значение.
	// RTTI - RunTime Type Information.


	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
}
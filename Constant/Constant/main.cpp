//Constants
#include <iostream>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "Russian");
	int speed = 0;              // ���������� ��������
	const int MAX_SPEED = 250;  // ���������� ��������
	speed = 80;
	//MAX_SPEED = 280;
	5; //�������� ��������� ���� 'int'
	5u; //�������� ��������� ���� 'unsigned int'
	5l; //�������� ��������� ���� 'long'

	cout << sizeof(5) << endl;
	cout << typeid(5ull).name() << endl;
	//typeid(value).name();
	//value - ��� ��������.
	// RTTI - RunTime Type Information.


	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
}
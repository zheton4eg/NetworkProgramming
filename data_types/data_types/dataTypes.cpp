#include <iostream>
using namespace std;
#define TYPE_INFO(TypeName, Size, minValue, maxValue) \
	cout << "��� ������ '" << ##TypeName << "' �������� " <<##Size\
		<< "���� ������� � ��������� �������� � ���������:\n"\
		<< ##TypeName << ": " << ##minValue << " ... " << ##maxValue << "; \n"
	
#define delimiter "\n-------------------------------------------------\n"

//#define LOGICAL_TYPES
//#define HOME_WORK
//#define FLOATING_TYPES
//#define INTEGRAL_TYPES
//#define DECLARATION_AND_INITIALIZATION

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello DataTypes" << endl;
#if defined LOGICAL_TYPES;
	cout << true << endl;
	cout << false << endl;
#endif

#ifdef HOME_WORK
	cout << "short";
	cout << sizeof(short) << endl;
	cout << "unsigned short:" << 0 << " ... " << USHRT_MAX << endl;
    cout << "signed short:" << SHRT_MIN << " ... " << SHRT_MAX << endl;
	cout << endl;
	cout << "signed int:" << INT_MIN << " ... " << INT_MAX << endl;
	cout << "int";
    cout << sizeof(int) << endl;
    cout << "unsigned int:" << 0 << " ... " << UINT_MAX << endl;
	cout << "signed int:" << INT_MIN << " ... " << INT_MAX << endl;
	cout << endl;
	cout << "long";
	cout << sizeof(long) << endl;
	cout << "unsigned long:" << 0 << " ... " << ULONG_MAX << endl;
	cout << "signed long:" << LONG_MIN << " ... " << LONG_MAX << endl;
	cout << endl;
	cout << "long long";
	cout << sizeof(long long) << endl;
	cout << "unsigned long long:" << 0 << " ... " << ULLONG_MAX << endl;
	cout << "signed long long:" << LLONG_MIN << " ... " << LLONG_MAX << endl;
#endif// HOME_WORK

#ifdef INTEGRAL_TYPES
	TYPE_INFO("long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
	TYPE_INFO("unsigned int", sizeof(unsigned int), 0, UINT_MAX);
	//cout << "unsigned int: " << 0 << " ... " << INT_MAX << endl;//UINT - unsigned int
	//cout << "  signed int: " INT_MIN << " ... " << INT_MAX << endl;
	cout << delimiter << endl;
	//float
	//double  
#endif // INTEGRAL_TYPES

#ifdef _FLOATING_TYPES
	TYPE_INFO("float", sizeof(float), FLT_MIN, FLT_MAX);
	cout << delimiter << endl;

	TYPE_INFO("double", sizeof(double), DBL_MIN, DBL_MAX);
#endif // _FLOATING_TYPES

#ifdef DECLARATION_AND_INITIALIZATION
	double price_of_coffee = 0; //������������� ��� ����������
	cout << price_of_coffee << endl;
	int a; //���������� ����������
	a = 0; //������������� ���������� ���������� ������������
	int b; // ���������� ����������
	cout << "������� �����: "; cin >> b;
	//������������� ���������� ����� ���������� ������ � ����������.
	//������������� - ��� ����� � ���������� � ������ ��� ���-�� ����������,
	// ������� ����� �������, ����� �� �������� ���� ��������,
	// �� ��� �����, ��� �������� � ����������,
	// ��� �������� ����� � ��������� ����� ������ 
#endif // DECLARATION_AND_INITIALIZATION


	double price_of_coffee;
	int number_of_cups;
	//cout << price_of_coffee << endl;
	cout << "������� ��������� ����� ����� ����: "; cin >> price_of_coffee;
	cout << "������� ����������� �����: "; cin >> number_of_cups;

	cout << "��������� ����� �����: " << price_of_coffee << " ��� ." << endl;
	cout << "����������� �����: " << number_of_cups << endl;
	cout << "����� ���������: " << price_of_coffee * number_of_cups << " ������\n";
}
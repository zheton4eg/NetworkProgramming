#include <iostream>
using namespace std;
#define TUSK1
//#define TUSK2
//#define TUSK3
//#define TUSK4

#define delimiter "\n--------------------------------------------------------\n"


void main()
{

	setlocale(LC_ALL, "Russian");
	cout << "HelloDataTypesTusk\n";


#ifdef TUSK1

	double fractional_nu, frac_after;
	int integer_nu;

	cout << "������� ������� �����" << endl; cin >> fractional_nu; integer_nu = fractional_nu; frac_after = (fractional_nu - integer_nu) * 100;
	cout << delimiter;
	cout << integer_nu << " ����. " << frac_after << " ���." << endl;
	cout << delimiter;

#endif // TUSK1


#ifdef TUSK2
	int price_of_notebook; 
	int price_of_pen ;
	int number_of_notebook;


	cout << "������� ��������� ����� ������� � ���. : "; cin >> price_of_notebook;
	cout << "������� ��������� ����� ����� � ���. : "; cin >> price_of_pen;
	cout <<       "������� ���-�� ����������: "          ; cin >> number_of_notebook;
	cout << delimiter;
	cout << "��������� ����� �������: "  << price_of_notebook << "���." << endl;
	cout << "���-�� ��������: "         << number_of_notebook << endl;
	cout << delimiter;
	cout << "����� �������� ����������: " << (price_of_notebook + price_of_pen) * number_of_notebook << "���.";
	cout << delimiter;
#endif // TUSK2


#ifdef TUSK3
	int price_of_notebook;
	int price_of_cover;
	int number_of_set;
	cout << "������� ��������� ����� ������� � ���. : "; cin >> price_of_notebook;
	cout << "������� ��������� ����� ������� � ���. : "; cin >> price_of_cover;
	cout << "������� ���-�� ����������:       "; cin >> number_of_set;
	cout << delimiter;
	cout << "��������� ����� �������: "   << price_of_notebook << "���. " << endl;
	cout << "��������� ����� �������: "   << price_of_cover << "���. " << endl;
	cout << delimiter;
	cout << "��������� ������ ��������� " << price_of_notebook + price_of_cover << "���.\n";
	cout << delimiter;
	cout << "����� ��������� ���������� " << (price_of_notebook + price_of_cover) * number_of_set << "���.";
	cout << delimiter;
#endif // TUSK3


#ifdef TUSK4
	double distance_to_the_holiday_house;
	double gasoline_consumption_per_100_km;
	double price_per_liter_of_gasoline;

	cout << "������� ���������� �� ����� ���� � ��.: "; cin >> distance_to_the_holiday_house;
	cout << "������� ������ ������� �� 100��.: "; cin >> gasoline_consumption_per_100_km;
	cout << "������� ��������� 1��� �������: "; cin >> price_per_liter_of_gasoline ;
	cout << delimiter;
	cout << "���������� �� ����:" << distance_to_the_holiday_house << "��." << endl;
	cout << "������ ������� �� 100��:" << gasoline_consumption_per_100_km << "���." << endl;
	cout << "��������� 1��� �������:" << price_per_liter_of_gasoline << "���. ";
	cout << delimiter;
	cout << "������ ������� ��������� �� ����: " << gasoline_consumption_per_100_km / 100 * distance_to_the_holiday_house << endl;
	cout << "��������� ����� �� ������� �� ���� � ������� � ���.: " << gasoline_consumption_per_100_km / 100 * distance_to_the_holiday_house * price_per_liter_of_gasoline * 2;
	cout << delimiter;
#endif // TUSK4


}
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

	cout << "Введите дробное число" << endl; cin >> fractional_nu; integer_nu = fractional_nu; frac_after = (fractional_nu - integer_nu) * 100;
	cout << delimiter;
	cout << integer_nu << " грвн. " << frac_after << " коп." << endl;
	cout << delimiter;

#endif // TUSK1


#ifdef TUSK2
	int price_of_notebook; 
	int price_of_pen ;
	int number_of_notebook;


	cout << "Введите стоимость одной тетради в грн. : "; cin >> price_of_notebook;
	cout << "Введите стоимость одной ручки в грн. : "; cin >> price_of_pen;
	cout <<       "Введите кол-во комплектов: "          ; cin >> number_of_notebook;
	cout << delimiter;
	cout << "Стоимость одной тетради: "  << price_of_notebook << "грн." << endl;
	cout << "Кол-во тетрадей: "         << number_of_notebook << endl;
	cout << delimiter;
	cout << "Общая стоиость комплектов: " << (price_of_notebook + price_of_pen) * number_of_notebook << "грн.";
	cout << delimiter;
#endif // TUSK2


#ifdef TUSK3
	int price_of_notebook;
	int price_of_cover;
	int number_of_set;
	cout << "Введите стоимость одной тетради в грн. : "; cin >> price_of_notebook;
	cout << "Введите стоимость одной обложки в грн. : "; cin >> price_of_cover;
	cout << "Введите кол-во комплектов:       "; cin >> number_of_set;
	cout << delimiter;
	cout << "стоимость одной тетради: "   << price_of_notebook << "грн. " << endl;
	cout << "стоимость одной обложки: "   << price_of_cover << "грн. " << endl;
	cout << delimiter;
	cout << "стоимость одного комплекта " << price_of_notebook + price_of_cover << "грн.\n";
	cout << delimiter;
	cout << "общая стоимость комплектов " << (price_of_notebook + price_of_cover) * number_of_set << "грн.";
	cout << delimiter;
#endif // TUSK3


#ifdef TUSK4
	double distance_to_the_holiday_house;
	double gasoline_consumption_per_100_km;
	double price_per_liter_of_gasoline;

	cout << "Введите расстояние до вашей дачи в км.: "; cin >> distance_to_the_holiday_house;
	cout << "Введите расход бензина на 100км.: "; cin >> gasoline_consumption_per_100_km;
	cout << "Введите стоимость 1лтр бензина: "; cin >> price_per_liter_of_gasoline ;
	cout << delimiter;
	cout << "Расстояние до дачи:" << distance_to_the_holiday_house << "км." << endl;
	cout << "Расход бензина на 100км:" << gasoline_consumption_per_100_km << "лтр." << endl;
	cout << "Стоимость 1лтр бензина:" << price_per_liter_of_gasoline << "грн. ";
	cout << delimiter;
	cout << "Литров бензина истрачено до дачи: " << gasoline_consumption_per_100_km / 100 * distance_to_the_holiday_house << endl;
	cout << "Истрачено денег за поездку до дачи и обратно в грн.: " << gasoline_consumption_per_100_km / 100 * distance_to_the_holiday_house * price_per_liter_of_gasoline * 2;
	cout << delimiter;
#endif // TUSK4


}
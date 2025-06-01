//Программа Score Rater
//Демонстрирует работу с инструкцией if
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");

	char continum;
	do {
		cout << "Хотите продолжить игру? y/n \n"; cin >> continum;

	} while (continum == 'y');
	if (continum == 'n')cout << "Спасибо за игру! " << endl;

		
}
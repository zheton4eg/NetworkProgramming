//��������� Score Rater
//������������� ������ � ����������� if
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");

	char continum;
	do {
		cout << "������ ���������� ����? y/n \n"; cin >> continum;

	} while (continum == 'y');
	if (continum == 'n')cout << "������� �� ����! " << endl;

		
}
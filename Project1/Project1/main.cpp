#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];

	cout << "������� �������� �������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "�������-��������������: " << (double)sum / SIZE << endl;

	int n;
	cout << "������� ����� ��� ������: "; cin >> n;
	for (int i = 1, i=0; i < SIZE; i++)
	{
		
		cout << arr[i] << tab;
	}
	cout << endl;




}
	

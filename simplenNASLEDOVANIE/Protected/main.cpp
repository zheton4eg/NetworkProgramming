#include <iostream>
using namespace std;
class A
{
public:
	string msgONE = "��������� ����";
private:
	string msgTWO = "��������� ���";
protected:
	string msgTHREE = "��������� ���";
};
class B :protected A
{
public:
	void PrintMSG()
	{
		cout << msgTHREE << endl;
	}
};
void main()
{
	setlocale(LC_ALL, "");
	B b;
	b.PrintMSG();

}
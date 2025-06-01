#include <iostream>
using namespace std;
class A
{
public:
	string msgONE = "Сообщение один";
private:
	string msgTWO = "Сообщение два";
protected:
	string msgTHREE = "Сообщение три";
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
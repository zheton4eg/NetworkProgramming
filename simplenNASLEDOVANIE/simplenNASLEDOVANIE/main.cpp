#include <iostream>
using namespace std;

class Human 
{
private:
	string name;
public:
	string get_name()
	{
		return name;
	}
	void set_name(string name)
	{
		this->name = name;
	}
};
class Student : public Human
{
public:
	string group;
	void Learn()
	{
		cout << "� �������, � ��������!" << endl;
	}
};
class Professor : public Human
{ public:
	
	string subject;
};
class ExtramuralStudent : public Student
{
public:
	void Learn()
	{
		cout << "� �������-�������, � ������������ ���� �������� ��������!" << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "");

	Student st;
	st.set_name("������� ������������� �����");
	cout << st.get_name() << endl;
	st.Learn();

	ExtramuralStudent ExSt;
	ExSt.set_name("���������� ������������ ����������");
	cout << ExSt.get_name() << endl;
	
	ExSt.Learn();
	



 }
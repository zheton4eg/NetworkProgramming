#include <iostream>
using namespace std;
#define delimiter "\n-------------------------------------\n"
class String
{
	int size;
	char* str;

public:
	int get_size()const
	{
		return size;
	}
	const char* get_str()const
	{
		return str;
	}
	char* get_str()
	{
		return str;
	}
	//void set_size(int size)
	//{
	//	this->size = size;
	//}
	//void set_str(char* str)
	//{
	//	this->str = str;
	//}

	//   Constructors

	explicit String(int size = 80)
	{
		this->size = size;
		this->str = new char[size] {};
		cout << "DefaultConstructor:\t" << this << endl;
	}
	String(const char str[])
	{
		this->size=strlen(str)+1;
		this->str = new char[size] {};
		for (int i = 0;str[i]; i++)this->str[i] = str[i];
		cout << "Constructor:\t\t" << this << endl;
	}
	String(const String& other)
	{
		this->size = other.size;
		this->str = str;
		for (int i = 0; i < size; i++)this->str[i] = other.str[i];
		cout << "CopyConstructor:" << this << endl;
	}
	~String()
	{
		delete[]str;
		cout << "Destructor:\t\t" << this << endl;
	}
	String& operator=(const String& other)
	{
		this->size = other.size;
		this->str = str;
		for (int i = 0; i < size; i++)this->str[i] = other.str[i];
		cout << "CopyAssignment:" << this << endl;
		return *this;
	}

	//    Methods:
	void print()const
	{
		cout << "Object:\t\t\t" << this << endl;
		cout << "Size:\t\t\t" << size << endl;
		cout << "Addr:\t\t\t" << &str << endl;
		cout << "Str:\t\t\t" << str << endl;
		cout << delimiter << endl;
	}
	
};
String operator +(const String& left, const String& right)
{
	String buffer(left.get_size() + right.get_size() - 1);
	for (int i = 0; i < left.get_size(); i++)
		buffer.get_str()[i] = left.get_str()[i];
	for (int i = 0; i < right.get_size(); i++)
		buffer.get_str()[i + left.get_size() - 1] = right.get_str()[i];
	return buffer;

}
std::ostream& operator<<(std::ostream& os, const String& obj)
{
	return os << obj.get_str();
}

void main()
{
	setlocale(LC_ALL, "");

	String str1;
	str1.print();

	String str2(8);
	str2.print();

	String str3 = "Hello";
	str3.print();

	String str4 = "World";
	str4.print();

	String str5;
	str5 = str3 + str4 ;
	str5.print();
}


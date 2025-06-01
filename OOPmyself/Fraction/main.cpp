#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Fraction;
int a, b, c;
Fraction& operator*(Fraction& left, Fraction& right);
Fraction& operator/(Fraction& left, Fraction& right);
Fraction& operator+(Fraction& left, Fraction& right);
Fraction& operator-(Fraction& left, Fraction& right);
Fraction& to_improper();
Fraction& to_proper();

class Fraction
{
	int integer;     //целое число
	int numerator;   //числитель(делимое)
	int denominator; //знамитатель(делитель)
public:
	
	void set_integer(int integer)
	{
		this->integer=integer;
	}
	double get_integer()
	{
		return integer;
	}
	void set_numerator(int numerator)
	{
		this->numerator = numerator;
	}
	int get_numerator()
	{
		return numerator;
	}
	void set_denominator(int denominator)
	{
		this->denominator=denominator;
	}
	int get_denominator()
	{
		return denominator;
	}
	//   Constructors:
	Fraction()
	{
		this->integer = 0;
		this->numerator = 0;
		this->denominator = 1;
		cout << "Вызвался конструктор по умолчанию\t"<<this<<endl;
	}
	explicit Fraction(int integer)
	{
		this->integer = integer;
			this->numerator = 0;
			set_denominator(1);
			cout << "Вызвался конструктор c 1им параметром\t" << this << endl;
	}

	Fraction(double decimal)
	{
		//decimal - десятичный
		//decimal += 1e-10;
		integer = decimal;//сохраняем целую часть
		decimal -= integer;//убираем целую часть десят.дроби
		denominator = 1e+9;//записываем макс.возможный знаминатель
		numerator = decimal * denominator+.5;
		
		reduce();
		cout << "DoubleConstractor:\t" << this << endl;
	}

	//explicit Fraction(double integer)
	//{
	//	int buffernumerator;
	//	int bufferdenominator;
	//	int difference;

	//	this->integer = integer;
	//	double buffer = integer - this->integer;
	//	if (buffer != 0)
	//	{
	//		buffernumerator = buffer * (1000000000);
	//		bufferdenominator=1000000000;

	//		difference = bufferdenominator - buffernumerator;
	//		if(buffernumerator% difference)
	//		{
	//			if (difference >= buffernumerator)
	//			{
	//				difference = buffernumerator;
	//				this->numerator = buffernumerator / difference;
	//				set_denominator(bufferdenominator / difference);
	//				cout << "Вызвался конструктор c double параметром \t" << this << endl;
	//			}
	//			else
	//			{
	//				this->numerator = buffernumerator / difference;
	//				set_denominator(bufferdenominator / difference);
	//				cout << "Вызвался конструктор c double параметром \t" << this << endl;
	//			}
	//		}
	//	}
	//	else
	//	{
	//		this->numerator = 0;
	//		set_denominator(1);
	//		cout << "Вызвался конструктор c 1им параметром\t" << this << endl;
	//	}
	//}
	Fraction(int numerator, int denominator)
	{
		this->integer = 0;
		this->numerator = numerator;
		this->denominator = denominator;
		cout << "Вызвался конструктор c 2мя параметрами\t" << this << endl;
	}
	Fraction(int integer,int numerator, int denominator)
	{
		this->integer = integer;
		this->numerator = numerator;
		this->denominator = denominator;
		cout << "Вызвался конструктор c 3мя параметрами\t" << this << endl;
	}
	Fraction(const Fraction& other)
	{
		this->integer = other.integer;
		this->numerator = other.numerator;
		this->denominator = other.denominator;
		cout << "КонструкторКопирования:\t" << this << endl;
	}
	~Fraction()
	{
		cout << "Вызвался деструктор\t\t\t" << this << endl;
	}
	Fraction& operator*=(Fraction& other)
	{
		return *this = *this * other;
	}
	Fraction& operator/=(Fraction& other)
	{
		return *this = *this / other;
	}
	Fraction& operator+=(Fraction& other)
	{
		return *this = *this + other;
	}
	Fraction& operator-=(Fraction& other)
	{
		return *this = *this - other;
	}
	//     Methods
	Fraction& reduce()
	{
		int more, less, rest;
		if (numerator > denominator)more = numerator, less = denominator;
		else less = numerator, more = denominator;
		do
		{
			rest = more % less;
			more = less;
			less = rest;
		} while (rest);
		int GDC = more;
		numerator /= GDC;
		denominator /= GDC;
		return* this;
	}
	Fraction& operator=(const Fraction& other)
	{
		this->integer = other.integer;
		this->numerator = other.numerator;
		this->denominator = other.denominator;
		cout << "ОператорПрисваивания:\t" << this << endl;
		return *this;
	}
	Fraction& operator--()
	{
		this->set_integer(get_integer() - 1);
		return *this;
	} 
	Fraction& operator--(int)
	{
		Fraction buffer = *this;
		this->set_integer(integer --);
		return buffer;
	}
	Fraction& operator++()
	{
		this->set_integer(get_integer() + 1);
		return *this;
	}
	Fraction& operator++(int)
	{
		Fraction buffer = *this;
		this->set_integer(integer++);
		return buffer;
	}

	Fraction& to_improper()
	{
		numerator += integer * denominator;
		integer = 0;
		return *this;
	}
	Fraction& to_proper()
	{
		integer += numerator / denominator;
		numerator %= denominator;
		return *this;
	}

	void Print()
	{
		cout << integer << " (" << numerator << "/" << denominator << ")" << endl;

	}
	//    Methods
	
};

Fraction& operator+( Fraction& left, Fraction& right)
{
	left.to_improper(); right.to_improper();

	Fraction buffer=left;
	
	left.set_numerator(left.  get_numerator() *   right.get_denominator());
	left.set_denominator(left.get_denominator() * right.get_denominator());
	
	right.set_numerator(  buffer.get_denominator() *   right.get_numerator());
	right.set_denominator(buffer.get_denominator() *   right.get_denominator());

	buffer.set_denominator(left.get_denominator());
	buffer.set_numerator( right.get_numerator()+left.get_numerator());

	buffer.to_proper();

	return buffer;
}
Fraction& operator-(Fraction& left, Fraction& right)
{
	left.to_improper(); right.to_improper();

	Fraction buffer = left;

	left.set_numerator(left.get_numerator() * right.get_denominator());
	left.set_denominator(left.get_denominator() * right.get_denominator());

	right.set_numerator(buffer.get_denominator() * right.get_numerator());
	right.set_denominator(buffer.get_denominator() * right.get_denominator());

	buffer.set_denominator(left.get_denominator());
	buffer.set_numerator(right.get_numerator() - left.get_numerator());

	buffer.to_proper();

	return buffer;
}
Fraction& operator*(Fraction& left, Fraction& right)
{
	left.to_improper(); right.to_improper();
	Fraction resoult;
	resoult.set_numerator(left.get_numerator() * right.get_numerator());
	resoult.set_denominator(left.get_denominator() * right.get_denominator());
	resoult.to_proper();
	return resoult;
}
Fraction& operator/(Fraction& left, Fraction& right)
{
	left.to_improper(); right.to_improper();
	Fraction resoult;
	resoult.set_numerator(left.get_numerator() * right.get_denominator());
	resoult.set_denominator(left.get_denominator() * right.get_numerator());
	resoult.to_proper();
	return resoult;
}
bool operator==(Fraction left, Fraction right)
{
	left.to_improper(); right.to_improper();
	 return left.get_denominator() * right.get_denominator()== left.get_numerator() * right.get_numerator();
}
bool operator!=(const Fraction& left,const Fraction& right)
{
	return !(left == right);
}
bool operator>(Fraction left, Fraction right)
{
	left.to_improper(); right.to_improper();
	return left.get_numerator() * right.get_numerator() > left.get_denominator()* right.get_denominator();
}
bool operator<(const Fraction& left,const Fraction& right)
{
	if (right != left)
	{
		return !(left > right);
	}
	else return (left > right);
}
bool operator >=(const Fraction& right,const Fraction& left)
{
	return !(left < right);
}
bool operator <=(const Fraction& right, const Fraction& left)
{
	return !(left > right);
}
 std::ostream& operator<<(std::ostream& os, Fraction& object)
{
	return os << object.get_integer() << " (" << object.get_numerator() << "/" << object.get_denominator() << ")" << endl;
}
 std::istream& operator>>(std::istream& is, Fraction& object)
{
	/* int integer, numerator, denominator;
	 is >> integer >> numerator >> denominator;
	 object = Fraction(integer, numerator,denominator);
	 return is;*/
	 const int SIZE = 256;
	 char buffer[SIZE] = {};
	 is >> buffer;
	 int numbers[3] = {};
	 int n = 0;
	 const char delimiters[] = " (/)";

	 for (char* pch = strtok(buffer, delimiters); pch; pch = strtok(NULL, delimiters))
		 numbers[n++] = atoi(pch);
	 for (int i = 0; i < n; i++)cout << numbers[i] << "\t"; cout << endl;
	 return is;

}
void main()
{
  setlocale(LC_ALL, "");

 

 /* A.to_improper().Print();
  A.to_proper().Print();
  B.Print();
  Fraction C = A - B;
  C.Print();
  --C;
  C.Print();
  C--;
  C.Print();
  C *= C;
  C.Print();
  cout << (Fraction(4, 1) >= Fraction(1, 3)) << endl;
  cout << A;
  
  cout << "Введите дробь: "; cin >> B;*/

  Fraction A;
  A = Fraction(2.77);
  cout << A;

 
}
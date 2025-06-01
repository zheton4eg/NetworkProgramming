#include <iostream>

using namespace std;


class Point
{
private:
	double x;
	double y;
public:
	void set_x(double x)
	{
		this->x = x;
	}
	double get_x()const
	{
		return x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	double get_y()const
	{
		return y;
	}
	Point()
	{
		y = x = 0;
	}
	Point(double x)
	{
		this->x = x;
		y = 0;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	~Point()
	{

	}
	Point& operator++(int)
	{
		Point oldValue = *this;
		this->x+1;
		this->y+1;
		return oldValue;
	}
	Point& operator++()
	{
		this->x++;
		this->y++;
		return *this;
	}

	void Print()const
	{
		cout << x << "\t" << y << "\t" << endl;
	}
	/*void PrintDist()
	{
		cout << x <<" - расстояние между координатами x" << "\t" << y << " - расстояние между координатами y" << "\t" << endl;
	}*/

	//     Methods
	/*double distance(Point other)
	{
		double distance_x = this->x - other.x;
		double distance_y = this->y - other.y;
		double distance = sqrt(distance_x * distance_x + distance_y * distance_y);
		return distance;
	 }*/

	//Point& distance(Point& other)
	//{
	//	if (this->x < other.x && this->y < other.y)
	//	{
	//		other.x -= this->x;
	//		other.y -= this->y;
	//		return other;
	//	}
	//	else {
	//		this->x -= other.x;
	//		this->y -= other.y;
	//		return *this;
	//	}
	//}
};
//Point& distanceFunc(Point& left,Point& right)
//{
//	Point buffer;
//	if (left.get_x() < right.get_x() && left.get_y() < right.get_y())
//	{
//		right.get_x() = right.get_x() - left.get_x();
//		right.get_y() = right.get_y() - left.get_y();
//
//		return buffer;
//	}
//	else
//	{
//		left.get_x() = left.get_x() - right.get_x() ;
//		left.get_y() = left.get_y() - right.get_y() ;
//
//		return buffer;
//	}
//
//}

double distance(Point A, Point B)
{
	double distance_x = A.get_x() - B.get_x();
	double distance_y = A.get_y() - B.get_y();
	double distance = sqrt(distance_x * distance_x + distance_y * distance_y);
	return distance;
}
Point& operator+(const Point& left, const Point& right)
{
	Point resoult;
	resoult.set_x(left.get_x() + right.get_x());
   resoult.set_y(left.get_y() + right.get_y());
   return resoult;
}
std::ostream& operator<<(std::ostream& os,const Point& object)
{
	return os << "x = "<< object.get_x()<<"\t" << "y = " << object.get_y()<<"\t";
}

bool operator==(const Point& left, const Point& right)
{
	return left.get_x() == right.get_x() && left.get_y() == left.get_y();
}

	



void main()
{
	setlocale(LC_ALL, "");


	Point A(2,3);

	Point B(7,8);
	A.Print();
	B.Print();
	cout <<distance(B,A) << endl;
	
	Point C = B+A;

	Point D, E, F, G;
	G = F = E = D = C;
	G.Print();
	++G;
	G.Print();

	cout<<(G==F);

	

	


	


}
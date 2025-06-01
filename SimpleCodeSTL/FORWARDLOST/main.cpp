#include <iostream>
#include <forward_list>
#define tab "\t"
using std::cin;
using std::cout;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	
	std::forward_list<int> forlis = { 3,5,8,13,21,34 };
	for (std::forward_list<int>::iterator it = forlis.begin(); it != forlis.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	std::forward_list<int>::iterator it = forlis.begin();
	forlis.insert_after(forlis.begin(), 999);
	for (std::forward_list<int>::iterator it = forlis.begin(); it != forlis.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;

}

#include <iostream>
#include <vector>
#define tab "\t"
using std::cin;
using std::cout;
using std::endl;
void main()
{
	setlocale(LC_ALL, "");
	std::vector<int> vec = {3,5,8,13,21,34};
	std::vector<int>::iterator it = vec.begin();
	

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	advance(it, 1);
	vec.insert(it, 999);
	std::vector<int>::iterator itErase = vec.begin();

	vec.erase(itErase);
	
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;

}
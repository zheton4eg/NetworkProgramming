#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int i = 1;
	for (; i < 11; i++)
	{
		if (i == 5)continue;
		cout << i << endl;
	}
	
}

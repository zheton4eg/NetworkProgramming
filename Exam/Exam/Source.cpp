#include <iostream>
using namespace std;

void main()
{
	//char a=128;
	//do {
	//	--a;	
	//		cout<<(char)a<<"\t" <<(int)a<<endl;
	//} while (a);

	int rows = 3;
	int cols = 4;

	int** arr = new int* [rows];
	
	for (int i = 0; i < rows; ++i)
	{
		int** arr = new int* [rows];
	}
	
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = rand() % 100;
	}

}
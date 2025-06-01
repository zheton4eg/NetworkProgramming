#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand, maxRand;
	cout << "Введите минимальное число: "; cin >> minRand;
	cout << "Введите максимальное число: "; cin >> maxRand;
	//заполнение массива случайным числом
	if (minRand < maxRand)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;  
		}
	
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;

		}
		cout << endl;

		
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				

				if (arr[j] == arr[i])
				{
					int boofer = arr[i];
					arr[j] += arr[j]+1<= maxRand;
					arr[i] = arr[j];
		
					arr[j] = boofer;
				}
				

			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
			
				if (arr[j] == arr[i])
				{
					int boofer = arr[i];
					arr[j] -= 2 <= arr[n-1];
					arr[i] = arr[j];

					arr[j] = boofer;
				}


			}
		}

		
		
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
	else if (minRand >= maxRand)
		cout << "ОШИБКА! Минимальное значение больше или равно максимальному! Попробуйте еще раз."; cout << endl; main();
}


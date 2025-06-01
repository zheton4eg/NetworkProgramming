#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Введите кол-во клеток: "; cin >> n; n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if ((i + j) % 2 == 0) {
				cout << "██"; // для черных клеток
			}
			else {
				cout << " "; // для белых клеток
			}
		}
		std::cout << "\n"; // переход на новую строку для следующего ряда
	}

	return 0;
}

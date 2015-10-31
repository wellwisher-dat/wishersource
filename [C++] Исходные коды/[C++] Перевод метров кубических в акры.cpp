/* Напишите программу для перевода:
Площади - м3 в акры */

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double s;
	int a, b;
	bool flag = true;
	cout << "Введите ваше число: ";
	cin >> s;
	cout << "\n\nВыберите нужный вариант";
	cout << "\n\nДля перевода квадратных метров в акры, введите 1.";
	cout << "\nДля перевода акров в квадратные метры, введите 2.\n\n";
	do {
		cout << "Выбор: ";
		cin >> a;
		cout << "\n\n";
		switch (a) {
		case 1:
			s = s / 4046.86;
			flag = true;
			break;
		case 2:
			s = s*4046.86;
			flag = true;
			break;
		default:
			flag = false;
			break;
		}
	} while (flag == false);
	cout << "Полученное значение = " << s << "\n\n";
	system("pause");
	return 0;
}
/* �������� ��������� ��� ��������:
������� - �3 � ���� */

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double s;
	int a, b;
	bool flag = true;
	cout << "������� ���� �����: ";
	cin >> s;
	cout << "\n\n�������� ������ �������";
	cout << "\n\n��� �������� ���������� ������ � ����, ������� 1.";
	cout << "\n��� �������� ����� � ���������� �����, ������� 2.\n\n";
	do {
		cout << "�����: ";
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
	cout << "���������� �������� = " << s << "\n\n";
	system("pause");
	return 0;
}
/* ������������ ����, ������� ��������� ����� ����� � ���������� � ������������ �-�� �����, ������ 10. ��������� ����� - ���� ����� 100. */

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	int counter=0, x;
	do {
	cin >> x;
	if(x<10) counter++;
	}
	while(x!=100);
	cout << counter << "\n";
	system("pause");
	return 0;
}
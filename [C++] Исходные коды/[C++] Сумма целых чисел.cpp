/* ��������� ����� ����� �����: 
�� 69 �� 12 � ����� -3 (69 + 66 + 63 + ...) */

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	int sum=0, i;
	for(i=69;i>=12;i-=3) {
		sum = sum + i;
		cout << i << " ";
	}
	cout << "\n����� ���� ����� ����� " << sum << "\n";
     system("pause");
	return 0;
}
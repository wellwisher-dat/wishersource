/* �������� ��������� ��� ������� �� ���� �������� (������ ������� ����������������� ����� �������):
z1 = (cos(3/8*pi - alfa/4))^2 - (cos(11/8*pi + alfa/4))^2
z2 = sqrt(2)/2 * sin(alfa/2) */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	double z1,z2,alfa;
	cout << "������� �������� \"�����\": ";
	cin >> alfa;
	z1 = pow(cos(3.14*3/8-alfa/4), 2) - pow(cos(3.14*11/8+alfa/4), 2);
	z2 = sqrt(2.0)/2*sin(alfa/2);
	cout << "\n����� = " << alfa << "\n\nZ1 = " << z1 << "\nZ2 = " << z2 << "\n\n";
	system("pause");
	return 0;
}
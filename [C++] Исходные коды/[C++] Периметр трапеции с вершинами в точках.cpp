/* ��������� ��������� ��� ������� ������:
��������� �������� �������� � ��������� � ������ : A(x1,0), B(x2,0), C(x2,y3), D(x1,y4)
��������� �������� � ����:
x1 = ... x2 = ... y3= ... y4 = ... �������� �������� = ... */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	double x1,x2,y3,y4,AB,BC,CD,DA,P;

	cout << "������� ���������� X1: ";
	cin >> x1;
	cout << "\n������� ���������� X2: ";
	cin >> x2;
	cout << "\n������� ���������� Y3: ";
	cin >> y3;
	cout <<"\n������� ���������� Y4: ";
	cin >> y4;

	AB = x2-x1;
	BC = y3;
	CD = sqrt(pow(x1-x2,2)+pow(y4-y3,2));
	DA = y4;
	P = AB + BC + CD + DA;

	cout << "\nx1=" << x1 << " x2=" << x2 << " y3=" << y3 << " y4=" << y4 << "\n�������� �������� ����� = " << P << "\n\n";

	system("pause");
	return 0;
}
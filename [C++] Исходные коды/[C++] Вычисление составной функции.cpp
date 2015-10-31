/* ��������� ��������� ��� ���������� ��������� �������:

s = { e(f(x)) } 1 < x*b < 10
    { sqrt(abs(f(x)+4*b)) } 10 <= x*b < 20
	{ b*f(x)^2 } �����

f(x) ����� ��������� ���� �� ���� �������� (ex ��� x2)  �� ������ ������������

��������� �������� � ����:

x = ... b =... f(x)= [exp(x)|x^2] s =... */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	double x,b,s,f;
	int a;
	cout << "������� x = ";
	cin >> x;
	cout << "������� b = ";
	cin >> b;
	label1:;
	cout << "\n�� ��� ��� ��������� f(x)?\n\n1 - e^x\n2 - x^2\n\n��� �����: ";
	cin >> a;
	switch(a) {
	case 1:
		f = exp(x);
		break;
	case 2:
		f = pow(x,2);
		break;
	default:
		goto label1;
		break;
	}
	if (x*b > 1 && x*b < 10) {
		s = exp(f);
	}
	else if (x*b >= 10 && x*b < 40) {
		s = sqrt(abs(f+4*b));
	}
	else {
		s = b*pow(f,2);
	}
	cout << "\nx = " << x << " b = " << b << " f(x) = " << f << " s = " << s << "\n\n";
	system("pause");
	return 0;
}
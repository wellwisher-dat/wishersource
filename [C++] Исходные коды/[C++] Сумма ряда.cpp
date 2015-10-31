/* Вычислить сумму ряда:

arctg(x) = Pi/2 - x + x^3/3 - x^5/5 + ... |x| <= 1*/

#include <iostream>
#include <cmath>
using namespace std;

double sumr(double x)
{
    const double Pi = 3.14159265358979;
    double S = Pi / 2;
	int N;
	cout << "Введите N: ";
	cin >> N;
    for (int i = 0; i < N; i++)
        S +=  (pow(-1.0, i + 1) * pow(x,2*i + 1))/(2 * i + 1);
    return S;
}

int main() {
	setlocale(LC_ALL,"Russian");
	const double Pi = 3.14159265358979;
    double x;
    cout << "Введите x: ";
    cin >> x;
    double a = Pi / 2 - atan(x);
    double b = sumr(x);
	cout << "a = " << a << ", b = " << b << endl;
	system("pause");
	return 0;
}

/* Составьте программу для вычисления составной функции:

s = { e(f(x)) } 1 < x*b < 10
    { sqrt(abs(f(x)+4*b)) } 10 <= x*b < 20
	{ b*f(x)^2 } иначе

Должны быть использованы следующие функции:

• функция f выполняет запрос к пользователю и возвращает значение ex либо x2;
• функция one выполняет вычисление по первой формуле;
• функция two выполняет вычисление по второй формуле;
• функция three выполняет вычисление по третьей формуле.

Типы аргументов и функций продумайте самостоятельно.
 */

#include <iostream>
#include <cmath>

using namespace std;

double f(double);
double one(double, double);
double two(double, double);
double three(double, double);

int main()
{
	setlocale(LC_ALL,"Russian");
	double x, b, s;
	cout << "Введите x: ";
	cin >> x;
	cout << "\nВведите b: ";
	cin >> b;
	if (x*b < 10 && x*b > 1)
		s = one(f(x), b);
	else if (x*b < 40 && x*b >= 10)
			s = two(f(x), b);
		else
			s = three(f(x), b);
	cout << "\nx = " << x << "   b = " << b << "   s = " << s << endl;
	system("pause");
}

double f(double x)
{
	int a;
label1:;
	cout << "\n1. f(x) = e^x | 2. f(x) = x^2\n\nВвод: ";
	cin >> a;
	switch(a)
	{
	case 1:
		return exp(x);
		break;
	case 2:
		return pow(x,2);
		break;
	default:
		goto label1;
		break;
	}
}

double one(double f, double b)
{
	return exp(f);
}

double two(double f, double b)
{
	return sqrt(abs(f+4*b));
}

double three(double f, double b)
{
	return b*pow(f,2);
}

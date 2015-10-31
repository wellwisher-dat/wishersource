/* —оставьте программу дл€ вычислени€ составной функции:

s = { e(f(x)) } 1 < x*b < 10
    { sqrt(abs(f(x)+4*b)) } 10 <= x*b < 20
	{ b*f(x)^2 } иначе

ƒолжны быть использованы следующие функции:

Х функци€ f выполн€ет запрос к пользователю и возвращает значение ex либо x2;
Х функци€ one выполн€ет вычисление по первой формуле;
Х функци€ two выполн€ет вычисление по второй формуле;
Х функци€ three выполн€ет вычисление по третьей формуле.

“ипы аргументов и функций продумайте самосто€тельно.
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
	cout << "¬ведите x: ";
	cin >> x;
	cout << "\n¬ведите b: ";
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
	cout << "\n1. f(x) = e^x | 2. f(x) = x^2\n\n¬вод: ";
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

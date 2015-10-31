/* Вычислить и вывести на экран в виде таблицы значения функции F от x1 до x2 с шагом dx 

F = { -a * x^2 - b } x < 5 и c != 0 
    { (x - a) / x } x > 5 и c = 0
	{ -x / c } в остальных случаях 
	
где a, b и c - действительные числа.
	
Результат получить в виде:

---------------------
|    x    |    F    |
---------------------
|  -3.50  |   2.80  |
|  -3.00  |   2.60  |
      ...
---------------------

Для ввода/вывода используйте библиотеку stdio. */

#include <iostream> 
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	double a,b,c,x1,x2,dx,F,x;
	printf("Введите a,b,c:\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("Введите x1,x2,dx:\n");
	scanf("%f%f%f",&x1,&x2,&dx);
	for(x=x1;x<x2;x+=dx) {
		if(x<5 && c!=0) {
			F=-a*pow(x,2)-b;
			printf("%2.43s\n", "-----------------------------------------------------------------------------------------------------------");
			printf("|%2.10s%c%2.10s|%2.8s%c%2.10s|\n", "                                                        ", 'x', "                                                 ", "                                                               ", 'F', "                                                       ");
			printf("%2.43s\n", "-----------------------------------------------------------------------------------------------------------");
			printf("|%2.10s%2.3f%2.10s|%2.8s%2.3f%2.10s|\n", "                                                        ", &x, "                                                 ", "                                                               ", &F, "                                                       ");
			printf("%2.43s\n", "-----------------------------------------------------------------------------------------------------------");
		}
		else if(x>5 && c==0) {
			F=(x-a)/x;
			cout << "-------------------------------------------\n";
			cout << "|          x          |        F          |\n";
			cout << "-------------------------------------------\n";
			cout << "|          " << x << "          |        " << F << "          |\n";
			cout << "-------------------------------------------\n";
		}
		else {
			F=-x/c;
				cout << "-------------------------------------------\n";
			cout << "|          x          |        F          |\n";
			cout << "-------------------------------------------\n";
			cout << "|          " << x << "          |        " << F << "          |\n";
			cout << "-------------------------------------------\n";
		}
	}
	system("pause");
	return 0;
}

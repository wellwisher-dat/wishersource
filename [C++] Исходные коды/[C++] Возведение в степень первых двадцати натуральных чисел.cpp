/* �������� �������, ������� �������� � ��� ������ 20 ����������� ����� � ������� �� �� �����. */

#include <iostream>
#include <math.h>
using namespace std;

void func()
{
	int a(1),i;
	for(i=1;i<=20;i++)
	{
		a = pow(i,3.0);
		cout << a << " ";
	}
}

int main()
{
	func();
	system("pause");
	return 0;
}
/* В тексте, вводимом с клавииатуры, подсчитать количество букв и цифр. */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char str[100];
	cout << "Enter the line: ";
	gets(str);
	cout << "The quantity of symbols: " << strlen(str) << "\n";
	system("pause");
	return 0;
}

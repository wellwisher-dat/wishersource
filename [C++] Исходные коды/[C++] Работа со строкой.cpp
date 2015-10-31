/* Дана строка текста, в которой слова разделены пробелами и запятыми. Необходимо:

      а) определить количество слов в строке, которые начинаются с согласной буквы;

      б) найти слова, содержащее две одинаковые буквы подряд и их порядковые номера;

      в) вывести слова в алфавитном порядке.

Строку инициализировать в коде программы:

So she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid,  whether  the  pleasure  of making a daisy-chain would be worth the trouble of getting up and  picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her. */

#include <iostream>
#include <stdlib.h>
using namespace std;

char str[] = "so she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid,  whether  the  pleasure  of making a daisy-chain would be worth the trouble of getting up and  picking the daisies, when suddenly a white rabbit with pink eyes ran close by her.";
char mass[60][15];
char tmp[15];
int b[60];
int a = 0;

void func_1();
void func_2();
void func_3();

int main()
{
	setlocale(LC_ALL,"Russian");
	cout << "Исходная строка: ";
	for(int i = 0; i <= sizeof(str) - 1; i++) cout << str[i];
	cout << endl << endl;
	func_1();
	func_2();
	func_3();
	system("pause");
	return 0;
}

void func_1()
{
	int i,j,count(0);
	char mass[] = "bBcCdDfFgGhHjJkKlLmMnNpPqQrRsStTvVwWxXyYzZ";
	cout << "Количество слов в строке, которые начинаются с согласной буквы: ";
	for(i=0;i<sizeof(str);i++)
	{
		for(j=0;j<sizeof(mass);j++)
		{
			if(str[i] == mass[j] && (str[i-1] == ' ' || str[i-1] == ', '))
			{
				count++;
			}
		}
	}
	cout << count+1 << endl << endl;
}

void func_2()
{
	int i,count(0);
	cout << "Порядковые номера слов, содержащих две одинаковые буквы подряд: ";
	for(i=0;i<sizeof(str);i++)
	{
		if(str[i] == ' ' || str[i] == ', ') count++;
		if(str[i] == str[i+1])
		cout << count+1 << ' ';
	}
	cout << endl << endl;
}

void func_3()
{
	int l = strlen(str);
	int k = 0;
	cout << "Строка, отсортированная по алфавиту:";
	for(int i=0;i<l;i++)
		if(str[i]!=' ' && str[i]!=',' && str[i]!='.')
		{
			mass[a][k]=str[i];
			k++;
		}
		else
		{
			b[a]=k;
			k=0;
			a++;
			if((str[i]==' ' && str[i-1]==',') || (str[i]==' ' && str[i-1]==' '))
				a--;
		}
		a++;
		for(int i=0;i<a-1;i++) {
			for(int j=i+1;j<a;j++) {
				if(strcmp(mass[i],mass[j])>0) {
					strcpy(tmp,mass[i]);
					strcpy(mass[i],mass[j]);
					strcpy(mass[j],tmp);
				}
			}
		}
		for(int i=0;i<a;i++) cout << mass[i] << ' ';
		cout << endl;
}

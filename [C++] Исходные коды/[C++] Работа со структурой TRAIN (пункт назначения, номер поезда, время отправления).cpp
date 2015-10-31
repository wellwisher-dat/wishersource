/* ќписать структуру с именем TRAIN, содержащую следующие пол€:

Х название пункта назначени€;
Х номер поезда;
Х врем€ отправлени€.

Ќаписать программу, выполн€ющую следующие действи€:

Х ввод с клавиатуры данных в массив, состо€щий из дес€ти структур типа TRAIN; записи должны быть размещены в алфавитном пор€дке по названию пунктов назначени€; 
Х вывод на дисплей информации о поездах, отправл€ющихс€ позже определеннего времени (ввести с клавиатуры);
Х если таких поездов нет, вывести соответствующее сообщение. */

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	struct TRAIN
	{
		char destination[25];
		int number;
		char time[25];
	};
	TRAIN data[25];
	for(int i=0;i<3;i++)
	{
		if(i==0)
			cout << "¬ведите место назначени€: ";
		else
			cout << "\n¬ведите место назначени€: ";
		cin >> data[i].destination;
		cout << "¬ведите номер поезда: ";
		cin >> data[i].number;
		cout << "¬ведите врем€ отправлени€: ";
		cin >> data[i].time;
	}

	 for (int i = 0; i < 25 - 1; i++)
        for (int j = i + 1; j < 25; j++)
			if (strcmp(data[i].destination,data[i+1].destination)>0) {
                TRAIN tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }

	char time2[25];
	bool flag = false;
	cout << "\n¬ведите желаемое врем€: ";
	cin >> time2;
	for(int i=0;i<3;i++)
	{
		if(strcmp(data[i].time,time2)>0)
		{
			cout << endl << "ѕоезд #" << data[i].number << " отправл€етс€ в город " << data[i].destination << " в " << data[i].time << ".";
			flag = true;
		}
	}
	if(!flag)
	{
		cout << "\n“аких поездов нет!";
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
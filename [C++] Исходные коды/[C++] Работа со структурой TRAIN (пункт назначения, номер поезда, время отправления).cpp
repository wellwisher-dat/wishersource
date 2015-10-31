/* ������� ��������� � ������ TRAIN, ���������� ��������� ����:

� �������� ������ ����������;
� ����� ������;
� ����� �����������.

�������� ���������, ����������� ��������� ��������:

� ���� � ���������� ������ � ������, ��������� �� ������ �������� ���� TRAIN; ������ ������ ���� ��������� � ���������� ������� �� �������� ������� ����������; 
� ����� �� ������� ���������� � �������, �������������� ����� ������������� ������� (������ � ����������);
� ���� ����� ������� ���, ������� ��������������� ���������. */

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
			cout << "������� ����� ����������: ";
		else
			cout << "\n������� ����� ����������: ";
		cin >> data[i].destination;
		cout << "������� ����� ������: ";
		cin >> data[i].number;
		cout << "������� ����� �����������: ";
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
	cout << "\n������� �������� �����: ";
	cin >> time2;
	for(int i=0;i<3;i++)
	{
		if(strcmp(data[i].time,time2)>0)
		{
			cout << endl << "����� #" << data[i].number << " ������������ � ����� " << data[i].destination << " � " << data[i].time << ".";
			flag = true;
		}
	}
	if(!flag)
	{
		cout << "\n����� ������� ���!";
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
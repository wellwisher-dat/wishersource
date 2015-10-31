/* ������� ��������� ��� �������� ��������� ���������� (��� ������������� ����������� ������������) ������ � �������������:

� ������� (���������, ��/���, ����������(4 ��������));
� ���������� (�-�� ������, ����������� (��/���));
� ���� (�������������, �-�� ������, ������� ��������(��/���), ����������/������������).

������� ������ �� 5 ����� ��������.

�������� ���������, ����������� ��������� ��������:

� ���������� ������ � ������; ���� � ������� ��� ����� - ������� ��������������� ���������;
� �������� ������ �� �������; ���� ����� ������ ��� - ������� ��������������� ���������;
� ����� ���� ������� �������. */

#include <iostream>
#include <iomanip>
using namespace std;

void add();
void deletez();
void view();

const int number = 5;
int mass2[number];

union all
	{
		struct monitor
		{
			char diag;
			char montype;
			char resolution[40];
		} m;
		struct keyboard
		{
			char buttonskey;
			char rus;
		} k;
		struct mouse
		{
			char proizv;
			char buttonsmouse;
			char koleso;
			char mousetype;
		} p;
	};

all mass[number+1];

int main()
{
	setlocale(LC_ALL,"Russian");
	char command;
	label1:;
	cout << "--------------------------------------------------------------------------------" << setw(45);
	cout << "���� ���������" << endl;
	cout << "--------------------------------------------------------------------------------" << setw(49);
	cout << "������ � �������������" << endl;
	cout << "--------------------------------------------------------------------------------";
	cout << "�������� ������ ��������:" << endl;
	cout << "�������� ������ (a)" << endl << "������� ������ (d)" << endl << "������� ������ ������� (v)" << endl << "����� �� ��������� (q)" << endl << "�����: "; 
	cin >> command;
	
		switch(command)
		{
		case 'a':
		add();
		break;
		case 'd':
		deletez();
		break;
		case 'v':
		view();
		break;
		case 'q':
		cout << "���������� ���������..." << endl;
		break;
		default:
		cout << "������� �������� �������! ���������� ��� ���!" << endl;
		break;
		}
		goto label1;
		cout << "���";
	system("pause");
	return 0;
}

void add()
{
	char choice;
	int count(0);
	int p(1);
	int i(0);
	while(p!=0)
	{
		i++;
		cout << "������� ��������� ��������: �������(m), ����������(k), ����(p)" << endl;
		cout << "����: ";
		cin >> choice;
		switch(choice)
		{
		case 'm':
			mass2[i] = 0;
			cout << "_�������_" << endl;
			cout << "���������: ";
			cin >> mass[i].m.diag;
			cout << "��(1)/���(2): ";
			cin >> mass[i].m.montype;
			cout << "���������� ������: ";
			cin >> mass[i].m.resolution;
			count++;
			break;
		case 'k':
			mass2[i] = 1;
			cout << "_����������_" << endl;
			cout << "���������� ������: ";
			cin >> mass[i].k.buttonskey;
			cout << "�����������: ";
			cin >> mass[i].k.rus;
			count++;
			break;
		case 'p':
			mass2[i] = 2;
			cout << "_����_" << endl;
			cout << "�������������: ";
			cin >> mass[i].p.proizv;
			cout << "���������� ������: ";
			cin >> mass[i].p.buttonsmouse;
			cout << "������� �������� (��/���): ";
			cin >> mass[i].p.koleso;
			cout << "����������(1)/������������(2): ";
			cin >> mass[i].p.mousetype;
			count++;
			break;
		default:
			cout << "���� ������� �� ���� ����������" << endl;
			break;
		}
		cout << "�������� ��� ������? (1 - ��, 0 - ���)" << endl;
		cout << "�����: ";
		cin >> p;
		if(count==number)
		{
			cout << endl << "������ ��������! ������� ������!" << endl;
			p = 0;
		}
	}
}

void deletez()
{
	int otvet;
	cout << "����� ������ ��������� �������? (1-5)" << endl;
	cout << "�����: ";
	cin >> otvet;
	switch(otvet)
	{
	case 1:
		mass[1].k.buttonskey = ' ';
		mass[1].k.rus = ' ';
		mass[1].m.diag = ' ';
		mass[1].m.montype = ' ';
		strcpy(mass[1].m.resolution,""); 
		mass[1].p.buttonsmouse = ' ';
		mass[1].p.koleso = ' ';
		mass[1].p.mousetype = ' ';
		mass[1].p.proizv = ' ';
		break;
	case 2:
		mass[2].k.buttonskey = ' ';
		mass[2].k.rus = ' ';
		mass[2].m.diag = ' ';
		mass[2].m.montype = ' ';
		strcpy(mass[2].m.resolution,""); 
		mass[2].p.buttonsmouse = ' ';
		mass[2].p.koleso = ' ';
		mass[2].p.mousetype = ' ';
		mass[2].p.proizv = ' ';
		break;
	case 3:
		mass[3].k.buttonskey = ' ';
		mass[3].k.rus = ' ';
		mass[3].m.diag = ' ';
		mass[3].m.montype = ' ';
		strcpy(mass[3].m.resolution,""); 
		mass[3].p.buttonsmouse = ' ';
		mass[3].p.koleso = ' ';
		mass[3].p.mousetype = ' ';
		mass[3].p.proizv = ' ';
		break;
	case 4:
		mass[4].k.buttonskey = ' ';
		mass[4].k.rus = ' ';
		mass[4].m.diag = ' ';
		mass[4].m.montype = ' ';
		strcpy(mass[4].m.resolution,""); 
		mass[4].p.buttonsmouse = ' ';
		mass[4].p.koleso = ' ';
		mass[4].p.mousetype = ' ';
		mass[4].p.proizv = ' ';
		break;
	case 5:
		mass[5].k.buttonskey = ' ';
		mass[5].k.rus = ' ';
		mass[5].m.diag = ' ';
		mass[5].m.montype = ' ';
		strcpy(mass[5].m.resolution,""); 
		mass[5].p.buttonsmouse = ' ';
		mass[5].p.koleso = ' ';
		mass[5].p.mousetype = ' ';
		mass[5].p.proizv = ' ';
		break;
	}
}

void view()
{
	for(int i=1;i<=5;i++)
	{
		cout << "������ �" << i << endl;
		switch(mass2[i])
		{
		case 0:
			cout << "_�������_" << endl;
			cout << "���������: ";
			cout << mass[i].m.diag << endl;
			cout << "��(1)/���(2): ";
			cout << mass[i].m.montype << endl;
			cout << "���������� ������: ";
			cout << mass[i].m.resolution << endl;
			break;
		case 1:
			cout << "_����������_" << endl;
			cout << "���������� ������: ";
			cout << mass[i].k.buttonskey << endl;
			cout << "�����������: ";
			cout << mass[i].k.rus << endl;
			break;
		case 2:
			cout << "_����_" << endl;
			cout << "�������������: ";
			cout << mass[i].p.proizv << endl;
			cout << "���������� ������: ";
			cout << mass[i].p.buttonsmouse << endl;
			cout << "������� �������� (��/���): ";
			cout << mass[i].p.koleso << endl;
			cout << "����������(1)/������������(2): ";
			cout << mass[i].p.mousetype << endl;
			break;
		}
	}
}
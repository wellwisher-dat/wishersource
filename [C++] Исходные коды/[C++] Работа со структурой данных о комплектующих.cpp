/* Описать структуру для хранения следующей информации (при необходимости используйте перечисления) данные о комплектующих:

• монитор (диагональ, ЖК/ЭЛТ, разрешение(4 варианта));
• клавиатура (к-во клавиш, русификация (да/нет));
• мышь (производитель, к-во кнопок, наличие колесика(да/нет), оптическая/механическая).

Создать массив из 5 таких структур.

Написать программу, выполняющую следующие действия:

• добавление записи в массив; если в массиве нет места - вывести соответствующее сообщение;
• удаление записи из массива; если такой записи нет - вывести соответствующее сообщение;
• вывод всех записей массива. */

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
	cout << "МЕНЮ ПРОГРАММЫ" << endl;
	cout << "--------------------------------------------------------------------------------" << setw(49);
	cout << "Данные о комплектующих" << endl;
	cout << "--------------------------------------------------------------------------------";
	cout << "Выберите нужное действие:" << endl;
	cout << "Добавить запись (a)" << endl << "Удалить запись (d)" << endl << "Вывести список записей (v)" << endl << "Выйти из программы (q)" << endl << "Ответ: "; 
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
		cout << "Завершение программы..." << endl;
		break;
		default:
		cout << "Введена неверная команда! Попробуйте еще раз!" << endl;
		break;
		}
		goto label1;
		cout << "лул";
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
		cout << "Введите требуемый параметр: монитор(m), клавиатура(k), мышь(p)" << endl;
		cout << "Ввод: ";
		cin >> choice;
		switch(choice)
		{
		case 'm':
			mass2[i] = 0;
			cout << "_Монитор_" << endl;
			cout << "Диагональ: ";
			cin >> mass[i].m.diag;
			cout << "ЖК(1)/ЭЛТ(2): ";
			cin >> mass[i].m.montype;
			cout << "Разрешение экрана: ";
			cin >> mass[i].m.resolution;
			count++;
			break;
		case 'k':
			mass2[i] = 1;
			cout << "_Клавиатура_" << endl;
			cout << "Количество клавиш: ";
			cin >> mass[i].k.buttonskey;
			cout << "Русификация: ";
			cin >> mass[i].k.rus;
			count++;
			break;
		case 'p':
			mass2[i] = 2;
			cout << "_Мышь_" << endl;
			cout << "Производитель: ";
			cin >> mass[i].p.proizv;
			cout << "Количество кнопок: ";
			cin >> mass[i].p.buttonsmouse;
			cout << "Наличие колесика (да/нет): ";
			cin >> mass[i].p.koleso;
			cout << "Оптическая(1)/механическая(2): ";
			cin >> mass[i].p.mousetype;
			count++;
			break;
		default:
			cout << "Ваша команда не была распознана" << endl;
			break;
		}
		cout << "Добавить еще запись? (1 - да, 0 - нет)" << endl;
		cout << "Ответ: ";
		cin >> p;
		if(count==number)
		{
			cout << endl << "Массив заполнен! Удалите запись!" << endl;
			p = 0;
		}
	}
}

void deletez()
{
	int otvet;
	cout << "Какую запись требуется удалить? (1-5)" << endl;
	cout << "Ответ: ";
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
		cout << "Запись №" << i << endl;
		switch(mass2[i])
		{
		case 0:
			cout << "_Монитор_" << endl;
			cout << "Диагональ: ";
			cout << mass[i].m.diag << endl;
			cout << "ЖК(1)/ЭЛТ(2): ";
			cout << mass[i].m.montype << endl;
			cout << "Разрешение экрана: ";
			cout << mass[i].m.resolution << endl;
			break;
		case 1:
			cout << "_Клавиатура_" << endl;
			cout << "Количество клавиш: ";
			cout << mass[i].k.buttonskey << endl;
			cout << "Русификация: ";
			cout << mass[i].k.rus << endl;
			break;
		case 2:
			cout << "_Мышь_" << endl;
			cout << "Производитель: ";
			cout << mass[i].p.proizv << endl;
			cout << "Количество кнопок: ";
			cout << mass[i].p.buttonsmouse << endl;
			cout << "Наличие колесика (да/нет): ";
			cout << mass[i].p.koleso << endl;
			cout << "Оптическая(1)/механическая(2): ";
			cout << mass[i].p.mousetype << endl;
			break;
		}
	}
}
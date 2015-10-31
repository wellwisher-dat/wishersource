/* Пользователь может ввести только один символ. Интерпретировать этот символ.  Возможные варианты символов: 

'&' - амперсанд

'#' - решетка

'@' - собачка

'*' - звездочка

'$' - доллар

'?' - вопрос

'[', ']' – квадратная скобка

'{', '}' – фигурная скобка

'(', ')' – круглая скобка

другое значение – некорректный символ. */

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	char a;
	cout << "Введите один из символов: ";
	cin >> a;
	switch(a) {
	case '&':
		cout << a << " - амперсанд.";
		break;
	case '#':
		cout << a << " - решетка.";
		break;
	case '@':
		cout << a << " - собачка.";
		break;
	case '*':
		cout << a << " - звездочка.";
		break;
	case '$':
		cout << a << " - доллар.";
		break;
	case '?':
		cout << a << " - вопрос.";
		break;
	case '[': case ']':
		cout << a << " - квадратная скобка.";
		break;
	case '{': case '}':
		cout << a << " - фигурная скобка.";
		break;
	case '(': case ')':
		cout << a << " - круглая скобка.";
		break;
	default:
		cout << a << " - некорректный символ.";
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}

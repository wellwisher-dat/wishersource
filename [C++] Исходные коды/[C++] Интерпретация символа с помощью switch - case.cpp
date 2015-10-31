/* ѕользователь может ввести только один символ. »нтерпретировать этот символ.  ¬озможные варианты символов: 

'&' - амперсанд

'#' - решетка

'@' - собачка

'*' - звездочка

'$' - доллар

'?' - вопрос

'[', ']' Ц квадратна€ скобка

'{', '}' Ц фигурна€ скобка

'(', ')' Ц кругла€ скобка

другое значение Ц некорректный символ. */

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	char a;
	cout << "¬ведите один из символов: ";
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
		cout << a << " - квадратна€ скобка.";
		break;
	case '{': case '}':
		cout << a << " - фигурна€ скобка.";
		break;
	case '(': case ')':
		cout << a << " - кругла€ скобка.";
		break;
	default:
		cout << a << " - некорректный символ.";
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}
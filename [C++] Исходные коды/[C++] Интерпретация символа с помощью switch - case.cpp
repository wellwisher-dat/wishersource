/* ������������ ����� ������ ������ ���� ������. ���������������� ���� ������.  ��������� �������� ��������: 

'&' - ���������

'#' - �������

'@' - �������

'*' - ���������

'$' - ������

'?' - ������

'[', ']' � ���������� ������

'{', '}' � �������� ������

'(', ')' � ������� ������

������ �������� � ������������ ������. */

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	char a;
	cout << "������� ���� �� ��������: ";
	cin >> a;
	switch(a) {
	case '&':
		cout << a << " - ���������.";
		break;
	case '#':
		cout << a << " - �������.";
		break;
	case '@':
		cout << a << " - �������.";
		break;
	case '*':
		cout << a << " - ���������.";
		break;
	case '$':
		cout << a << " - ������.";
		break;
	case '?':
		cout << a << " - ������.";
		break;
	case '[': case ']':
		cout << a << " - ���������� ������.";
		break;
	case '{': case '}':
		cout << a << " - �������� ������.";
		break;
	case '(': case ')':
		cout << a << " - ������� ������.";
		break;
	default:
		cout << a << " - ������������ ������.";
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}
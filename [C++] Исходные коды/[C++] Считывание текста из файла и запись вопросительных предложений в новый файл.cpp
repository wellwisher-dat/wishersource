/* �������� ���������, ������� ��������� ����� ��  ����� � ���������� � ����� ���� ������� �������������� �����������, � ����� ��� ���������.
��������� ���� ������� � ��������. */

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main()
{
	setlocale(LC_ALL,"Russian");
    ifstream in("File1.txt");
    if (!in) return 1;
    ofstream out("File2.txt");
    vector<string> vec; // ������ ���� string ��������������� �������
    string line;
    /* �������� ������ */
    while (getline(in, line))
    {
		/* �������� ������, ���� ��� �� �������������� */
        if (line.back() != '?') // back() - ������� ������ � ���������� ��������
            vec.push_back(line); // �������� ������� � ����� �������
		/* ���� �������������� - ����� �� ����� */
        else
        {
            cout << line << endl;
            out << line << endl;
        }
    }
    /* ����� ���, ��� �������� */
    for (vector<string>::const_iterator cit = vec.begin(); // begin() - ��������� �������� �� ������ ������� �������
        cit != vec.end(); ++cit) // end() - ��������� �������� �� ����� ����� ���������� �������� �������
    {
        cout << *cit << endl;
        out << *cit << endl;
    }
}
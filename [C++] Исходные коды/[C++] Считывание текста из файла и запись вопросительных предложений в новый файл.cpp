/* Написать программу, которая считывает текст из  файла и записывает в новый файл сначала вопросительные предложения, а затем все остальные.
Текстовый файл создать в блокноте. */

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
    vector<string> vec; // вектор типа string неограниченного размера
    string line;
    /* Считываю строку */
    while (getline(in, line))
    {
		/* Запомнил строку, если она не вопросительная */
        if (line.back() != '?') // back() - получил доступ к последнему элементу
            vec.push_back(line); // добавляю элемент в конец вектора
		/* Если вопросительная - вывел на экран */
        else
        {
            cout << line << endl;
            out << line << endl;
        }
    }
    /* Вывел все, что осталось */
    for (vector<string>::const_iterator cit = vec.begin(); // begin() - возвращаю итератор на первый элемент вектора
        cit != vec.end(); ++cit) // end() - возвращаю итератор на место после последнего элемента вектора
    {
        cout << *cit << endl;
        out << *cit << endl;
    }
}
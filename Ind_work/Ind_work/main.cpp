#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "queue.h"

using namespace std;
using MyProg::Queue;

void func(string str);

void func(string str)
{
	Queue <char> que_num;
	Queue <char> que_char;

	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] >= 48) && (str[i] <= 57))
		{
			que_num.push(str[i]);
		}

		else
		{
			que_char.push(str[i]);
		}
	}

	try
	{
		que_char.print();
		que_num.print();

		ofstream fout("Text_2.txt", std::ios::binary | std::ios::app); //открываем файл для записи в конец
		fout << endl;
		fout.close();

		cout << endl;
	}

	catch (const string& e)
	{
		cout << e << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
		
	ifstream fin; string str; ofstream fout;

	fout.open("Text_2.txt"); //Очистка файла
	fout.close();

	fin.open("Text.txt");

	while (!fin.eof()) // Пока не конец файла
	{
		getline(fin, str);
		cout << str;
		func(str);
	}

	fin.close();
		
	system("pause");
	return 0;
}	
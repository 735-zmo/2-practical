#include <iostream>
#include <conio.h>
#include <fstream>
#include "Stack.h"
#include <string>

using namespace std;
using MyProg::Stack;

int main()
{
	setlocale(LC_ALL, "Rus");

	Stack <char> St;

	St.push('k');
	St.push('c');
	St.push('a');
	St.push('t');
	St.push('s');
	St.push(' ');
	St.push('a');
	St.push(' ');
	St.push('s');
	St.push('`');
	St.push('t');
	St.push('I');
	try
	{
		St.print();
		St.pop();
		St.print();
		St.pop();
		St.print();
		St.pop();
		St.print();
	}
	catch (const string& e)
	{
		cout << e << '\n';
	}
	system("pause");
	return 0;
}
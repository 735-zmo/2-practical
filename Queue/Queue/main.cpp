#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "queue.h"

using namespace std;
using MyProg::Queue;

int main()
{
	setlocale(LC_ALL, "Rus");
	try
	{
		Queue <char> que;
		que.push('q');
		que.push('u');
		que.push('e');
		que.print();
		cout << endl;
		que.pop();
		que.print();
		cout << endl;
	}

	catch (const string& e)
	{
		cout << e << endl;
	}
	system("pause");
	return 0;
}
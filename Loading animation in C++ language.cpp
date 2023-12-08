// Loading animation in C++ language.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include<dos.h>
#include <process.h>

using namespace std;

int main()
{
	system("cls");
	char a = 177;
	char b = 219;
	system("color 0A");
	cout << "\n\n\n\t\t\t\t Please wait while loading\n\n";
	cout << "\t\t\t\t";
	for (int i = 0; i <= 15; i++)
		cout << a;
	cout << "\r";
	cout << "\t\t\t\t";
	for (int i = 0; i <= 15; i++)
	{
		cout << b;
		for (int j = 0; j <= 1e8; j++);
	}
	return 0;
}
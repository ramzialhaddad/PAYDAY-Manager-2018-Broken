#include "stdafx.h"
using namespace std;
//variables
int option;
int budget = 10000;
int heister1;
int heister2;
int heister3;
int heister4;
//misc variables
int b = 11;
int w = 15;

//menu for heists
void heistoptions()
{
	cout << "1. First World Bank\n";
	cin >> option;
	switch (option) {
	case 1:
		system("cls");
		fwb();
	}
}

//crime.net
void crimenet()
{
crimenet:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Welcome to ";
	SetConsoleTextAttribute(hConsole, b);
	cout << "Crime.net\n";
	SetConsoleTextAttribute(hConsole, w);
	cout << "What would you like to do?\n";
	cout << "1. Plan a heist\n";
	cout << "2. Change the crew\n";
	cout << "3. Budget\n";
	cin >> option;

	switch (option) {
	case 1:
		cout << "What heist would you like to do?\n";
		heistoptions(); //calling the menu function
	case 2:
		cout << "Which heisters do you want to change?\n";
		cout << "Your current heisters are:\n";
		
	case 3:
		cout << "Your budget is " << budget;
	}
	system("PAUSE");
}

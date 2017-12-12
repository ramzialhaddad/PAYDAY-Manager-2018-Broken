// PAYDAY Manager 2017.cpp : Defines the entry point for the console application.
// save file format no spaces: Username(string), Balance(int), SuspicionLevel(int), Loyalty(int), Repuation(int), Risk(int)

#include "stdafx.h"


/*       ____   _ __   ______    _ __   __
|  _ \ / \\ \ / /  _ \  / \\ \ / /
| |_) / _ \\ V /| | | |/ _ \\ V /
|  __/ ___ \| | | |_| / ___ \| |
__  __|_| /_/  _\_\_| |____/_/___\_\_|_ ____
|  \/  |  / \  | \ | |  / \  / ___| ____|  _ \
| |\/| | / _ \ |  \| | / _ \| |  _|  _| | |_) |
| |  | |/ ___ \| |\  |/ ___ \ |_| | |___|  _ <
|_|  |_/_/  _\_\_| \_/_/_ _\_\____|_____|_| \_\
|___ \ / _ \/ |___  |
__) | | | | |  / /
/ __/| |_| | | / /
|_____|\___/|_|/_/          */

using namespace std;

void crimenet() {
	cout << "Hello";
	endl;
}

int main()
{
	// this is to initilize inSaveFile as the saveFile.csv
	ifstream inSaveFile("saveFile.csv");

	// lets now make some variables the 2 below are just for the dump nothing more
	string value;
	string foundThing;

	// These variables are use consistenly throughout the game
	std::vector <string> saveFileUsername;
	std::vector <int> saveFileBalance;
	std::vector <int> saveFileSuspicion;
	std::vector <int> saveFileLoyalty;
	std::vector <int> saveFileReputation;
	std::vector <int> saveFileRisk;
	std::vector <string> saveFileDump;

	// This dumps all data from the save file to the saveFileDump vector that then we can access later
	while (inSaveFile.good()) {
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		foundThing = int(stoi(value));
		saveFileDump.push_back(value);
	}


	string username;

	int option;

	string intro = { "Logging in..." };
	string user = { "b41n" };
	string pass = { "bainistheman1978" };
	int i = 0;
	int u = 0;
	int p = 0;

	system("color 0f");
	SetConsoleTitle(L"PAYDAY Manager 2017");


	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int r = 12;
	int b = 11;
	int w = 15;
	cout << "PAYDAY: ";
	SetConsoleTextAttribute(hConsole, r);
	cout << "Manager 2017";
	endl;
	SetConsoleTextAttribute(hConsole, w);

	system("PAUSE");
	system("cls");


mainmenu:
	cout << "1. Play\n";
	cout << "2. Stats\n";
	cout << "3. Credits\n";
	cout << "4. Exit\n";
	cin >> option;
	system("cls");
	switch (option)
	{
	case 1:
		SetConsoleTextAttribute(hConsole, b);
		cout << "Crime.net\n";
		SetConsoleTextAttribute(hConsole, w);
		cout << "Please login.\n";

		cout << "Username: ";
		cin >> username;
		endl;
		sleep(1s);
		cout << "Password: ";
		sleep(0.5s);
		while (pass[p] != '\0')
		{
			cout << pass[p];
			Sleep(70);
			p++;
		}
		sleep(1s);
		system("cls");

		while (intro[i] != '\0')
		{
			cout << intro[i];
			Sleep(30);
			i++;
		}
		endl;
		sleep(1s);
		cout << "Found  " << username << " in database";
		elip;
		endl;
		cout << "Welcome, " << username << ".\n";

		system("PAUSE");

		crimenet();

	}
}

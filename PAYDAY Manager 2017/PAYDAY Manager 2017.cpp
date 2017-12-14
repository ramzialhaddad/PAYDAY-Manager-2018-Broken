// PAYDAY Manager 2017.cpp : Defines the entry point for the console application.
// save file format no spaces: Username(string), Balance(int), Budget(int), SuspicionLevel(int), Loyalty(int), Repuation(int), Risk(int)

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

// Here below is the stats() function, the functions needs reuqired vectors and variables in specific order to display
// the correct stats. The vector contains all the data of that category and the varible is the index of it.
int stats(std::vector <string> saveFileUsername, std::vector <int> saveFileBalance, std::vector <int> saveFileBudget, std::vector <int> saveFileSuspicion, std::vector <int> saveFileLoyalty, std::vector <int> saveFileReputation, std::vector <int> saveFileRisk, int index) {
	system("cls");
	cout << "Stats:" << "\n";
	Sleep(100);

	cout << "Username: " << saveFileUsername[index] << "\n";
	Sleep(100);

	cout << "Balance: " << saveFileBalance[index] << "\n";
	Sleep(100);

	cout << "Budget: " << saveFileBudget[index] << "\n";
	Sleep(100);

	cout << "Suspicion Level: " << saveFileSuspicion[index] << "\n";
	Sleep(100);

	cout << "Loyalty: " << saveFileLoyalty[index] << "\n";
	Sleep(100);

	cout << "Reputation: " << saveFileReputation[index] << "\n";
	Sleep(100);

	cout << "Risk: " << saveFileRisk[index] << "\n";
	Sleep(100);

	system("PAUSE");

	return 0;
}

int main()
{
	// These variables help with searching the inputted username in the vector saveFileUsername
	int index = 0;
	int searchedIndex = 0;
	bool valueFound;

	// this is to initilize inSaveFile as the saveFile.csv
	ifstream inSaveFile("saveFile.csv");

	// lets now make some variables the 2 below are just for the dump nothing more
	string value;

	// These variables are use consistenly throughout the game
	std::vector <string> saveFileUsername;
	std::vector <int> saveFileBalance;
	std::vector <int> saveFileBudget;
	std::vector <int> saveFileSuspicion;
	std::vector <int> saveFileLoyalty;
	std::vector <int> saveFileReputation;
	std::vector <int> saveFileRisk;
	std::vector <string> saveFileDump;

	// This dumps all data from the save file to the saveFileDump vector that then we can access later
	while (inSaveFile.good()) {
		// For username
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		saveFileUsername.push_back(string(value));

		// For Balance
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		saveFileBalance.push_back(int(stoi(value)));

		// For Budget
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		saveFileBudget.push_back(int(stoi(value)));

		// For Suspicion Level
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		saveFileSuspicion.push_back(int(stoi(value)));

		// For Loyalty
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		saveFileLoyalty.push_back(int(stoi(value)));

		// For Reputation
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		saveFileReputation.push_back(int(stoi(value)));

		// For Risk
		getline(inSaveFile, value, ',');
		cout << string(value);
		endl;
		saveFileRisk.push_back(int(stoi(value)));

		//so we can know how long the vectors are, useful for searching the username in saveFileUsername
		index += 1;
	}

	// declaring some variables
	string username;

	int option;

	string intro = { "LLogging in..." };
	string user = { "b41n" };
	string pass = { "bainistheman1978" };
	int i = 0;
	int u = 0;
	int p = 0;

	//lets set the colour of the console to look pretty
	system("color 0f");
	SetConsoleTitle(L"PAYDAY Manager 2017");

	//Printing the text with colour
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

	// a GoTo Loop thing so we can always refer back to it
mainmenu:
	system("cls");
	cout << "1. Play\n";
	cout << "2. Stats\n";
	cout << "3. Credits\n";
	cout << "4. Exit\n";
	cin >> option;
	system("cls");
	// A Switch Case
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

		// lets now find this username in the saveFileUsername vector then we can assign a index to it
		valueFound = false;

		for (i = -1; (i < index) && !valueFound;) {
			cout << i;
			endl;
			saveFileUsername[i];
			if (username == saveFileUsername[i]) {
				searchedIndex = i;
				valueFound = true;
			}
			++i;
		}

		if (valueFound) {
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
		else {
			sleep(1s);
			cout << "ERROR - No Such Username Exists";
			endl;
			sleep(2s);
		}

		break;
	case 2:
		// Lets call our C++ file called stats.cpp and pass the required variables and vectors
		stats(saveFileUsername, saveFileBalance, saveFileBudget, saveFileSuspicion, saveFileLoyalty, saveFileReputation, saveFileRisk, searchedIndex);
		break;

	case 3:

	case 4:
		exit(0);

	default:
		cout << "Sorry didn't quite get that!";
		endl;
		Sleep(1500);
		break;
	}
	goto mainmenu;
}

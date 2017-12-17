// PAYDAY Manager 2017.cpp : Defines the entry point for the console application.
// save file format no spaces: Username(string), Balance(int), Budget(int), SuspicionLevel(int), Loyalty(int),
// Reputation(int), Risk(int), Heister1(string), Heister2(string), Heister3(string), Heister4(string)

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

//This is the crime.net things

int option;
int budget = 10000;
int heister1;
int heister2;
int heister3;
int heister4;
string loudOrStealthInput;
int loudOrStealth;
//misc variables
int b = 11;
int w = 15;

// This is the First World Bank Heist
void fwb(std::vector <string> saveFileUsername, std::vector <int> saveFileBalance, std::vector <int> saveFileBudget, std::vector <int> saveFileSuspicion, std::vector <int> saveFileLoyalty, std::vector <int> saveFileReputation, std::vector <int> saveFileRisk, int index) {
	cout << "Loading";
	lelip;
	cout << "\n";

	cout << "You send the Payday Gang to the bank...\n";
	sleep(1s);

	cout << "They worry about the plan going south, they request you to either go loud or stealth\n";
	input;
	cin >> loudOrStealthInput;

	cout << "You chose " << loudOrStealthInput;
	endl;

	if (loudOrStealthInput == "loud" || loudOrStealthInput == "LOUD" || "Loud") {
		loudOrStealth = 1;
	}
	else {
		loudOrStealth = 0;
	}

	switch (loudOrStealth){
	case 0:
		for (;;) {
			if (saveFileRisk[index] >= 4 || saveFileSuspicion[index] >= 4) {
				loudOrStealth = 2;
				break;
			}
		}
	case 1:
		if (loudOrStealth == 1 || loudOrStealth == 2) {
			if (loudOrStealth == 1) {
				cout << "Your Gang reached the Bank with cops alerted and launching an assult soon!\n";
				lelip;
				system("cls");
				cout << "Quick! Type this!\n";
				sleep(0.1s);
				cout << "Guys! Find the Bank Manager and get this keycard. The drill and thermite is in the server room\n";
				
			}
			else {
				cout << "Your Risk or Suspicion Level is too high, the cops were called and the heist is now loud\n";
			}
		}
	}
}

//menu for heists
void heistoptions(std::vector <string> saveFileUsername, std::vector <int> saveFileBalance, std::vector <int> saveFileBudget, std::vector <int> saveFileSuspicion, std::vector <int> saveFileLoyalty, std::vector <int> saveFileReputation, std::vector <int> saveFileRisk, int index)
{
	cout << "1. First World Bank\n";
	cin >> option;
	switch (option) {
	case 1:
		system("cls");
		fwb(saveFileUsername, saveFileBalance, saveFileBudget, saveFileSuspicion, saveFileLoyalty, saveFileReputation, saveFileRisk, searchedIndex);
	
	default:
		cout << "Sorry, didn't quite get that!\n";
		system("PAUSE");
	}
}

//crime.net
void crimenet(std::vector <string> saveFileUsername, std::vector <int> saveFileBalance, std::vector <int> saveFileBudget, std::vector <int> saveFileSuspicion, std::vector <int> saveFileLoyalty, std::vector <int> saveFileReputation, std::vector <int> saveFileRisk, int index)
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
		heistoptions(saveFileUsername, saveFileBalance, saveFileBudget, saveFileSuspicion, saveFileLoyalty, saveFileReputation, saveFileRisk, searchedIndex); //calling the menu function
	case 2:
		cout << "Which heisters do you want to change?\n";
		cout << "Your current heisters are:\n";

	case 3:
		cout << "Your budget is " << budget;

	default:
		cout << "Sorry, didn't get that!\n";
		Sleep(1);
		goto crimenet;
	}
	system("PAUSE");
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

// finally, the main function
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

		//For the 4 heisters

		//so we can know how long the vectors are, useful for searching the username in saveFileUsername and others like heisters
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
			Sleep(500);
			cout << "To make an account you must 'hack' the game :)";
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

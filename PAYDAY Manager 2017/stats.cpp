/*
	This C++ file only shows your stats it is called in various times in the game and doesn't change only prints your stats
*/

#include "stdafx.h"

using namespace std;

int stats(std::vector <string> saveFileUsername, std::vector <int> saveFileBalance, std::vector <int> saveFileSuspicion,
	std::vector <int> saveFileLoyalty,std::vector <int> saveFileReputation, std::vector <int> saveFileRisk
	,int username, int balance, int suspicionLevel, int loyalty, int reputation, int risk){
	
	system("cls");
	cout << "Stats:";
	endl;
	Sleep(0.25);

	cout << "Username: " << saveFileUsername[username];
	endl;
	Sleep(0.25);

	cout << "Balance: " << saveFileBalance[balance];
	endl;
	Sleep(0.25);

	cout << "Suspicion Level: " << saveFileSuspicion[suspicionLevel];
	endl;
	Sleep(0.25);

	cout << "Loyalty: " << saveFileLoyalty[loyalty];
	endl;
	Sleep(0.25);

	cout << "Reputation: " << saveFileReputation[reputation];
	endl;
	Sleep(0.25);

	cout << "Risk: " << saveFileRisk[risk];
	endl;
	Sleep(0.25);

	system("PAUSE");
}
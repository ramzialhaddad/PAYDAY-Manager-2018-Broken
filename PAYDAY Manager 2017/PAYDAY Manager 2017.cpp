// PAYDAY Manager 2017.cpp : Defines the entry point for the console application.
//

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

int main()
{

	system("color 0f");
	SetConsoleTitle(L"PAYDAY Manager 2017");


	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int r = 12;
	int w = 15;
	cout << "PAYDAY: ";
	SetConsoleTextAttribute(hConsole, r);
	cout << "Manager 2017";
	endl;
	SetConsoleTextAttribute(hConsole, w);

	system("PAUSE");
	system("cls");
}


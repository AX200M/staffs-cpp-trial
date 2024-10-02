// CplusProject.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
	int ranNum = rand() % 100;
	const char *logoStaffs = R""""(

		   _____ __        ________    
		  / ___// /_____ _/ __/ __/____
		  \__ \/ __/ __ `/ /_/ /_/ ___/
		 ___/ / /_/ /_/ / __/ __(__  ) 
		/____/\__/\__,_/_/ /_/ /____/  
                               
	)"""";
	cout << logoStaffs;
	cout << ranNum;
}
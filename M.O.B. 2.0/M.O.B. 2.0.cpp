#include "pch.h"
#include <iostream>
#include <string>
#include "time.h"
//includes all classes and headers needed
#include "Header.h"
#include "Person.h"
#include "Bounty.h"

using namespace std;

int getValue(string *pX, string *pY);
int giveCredits(int *pZ, int &y);
void bountyTaken(string x);

int main()
{
	//variables needed for the code
	string name;
	string status;
	int credits, id, i;

	//establish bounty object
	Bounty bounty1;


	//Welcome message and explanation
	cout << "Welcome Bounty Hunter, to the Mobile Open Bounty Collection System";
	cout << "\nM.O.B. is able to pay out all bounties through it galaxy wide network and pointers!";
	cout << "\n\nTo claim your bounty, simply enter their name and if they are alive or dead.";

	//takes name and bounty status
	cout << "\n\nPlease enter your bounty's name: ";
	bounty1.setName();
	bountyTaken(name);
	cout << "\nPlease enter the status of your bounty (alive or dead): ";
	bounty1.setStatus();

	//pointers for name and bounty status
	string *pName = bounty1.getName;
	string *pStatus = bounty1.getStatus;

	//prints out everything for getValue() and also holds the returned int in vairable 'credits'
	credits = getValue(pName, pStatus);

	//gets number for deposit
	cout << "\n\nEnter your Hunter id number so that we may deposit your credits (11 digits): ";
	cin >> id;

	//pointer for deposit number
	int *pid = &id;

	//prints out everything for giveCredits() and stores the returned pointer in an int variable
	i = giveCredits(pid, credits);
	//prints out the address of the returned pointer
	cout << "\nAddress of Transaction: " << pid;
	cout << "\n";


	system("pause");

}

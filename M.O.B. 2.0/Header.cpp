#include "pch.h"
#include <iostream>
#include <string>
#include "time.h"
#include "Header.h"

using namespace std;

//determines value with 2 pointers and a seeded rand();
int getValue(std::string *pX, std::string *pY) {
	//seeds random num generator and establishs temp variable for value
	srand(time(NULL));
	int value;

	//prints dereferenced pointer for name and determines the value
	cout << "\nBounty for: " << *pX;
	value = 1000 + (rand() % 100000);
	//if the bounty is dead it is worht half as much
	if (*pY == "dead") {
		value = value / 2;
	}
	//prints value
	cout << "\nValued at: " << value;

	return value;
}

//prints oout the account num and credit value
int giveCredits(int *pZ, int &y) {

	//prints out the account number and the credits awarded, then returns the pointer
	cout << "\n\nAccount #" << *pZ << " has been awarded " << y << " credits";
	return *pZ;
}

//if its my name, lets them no there can be no bounty on me
void bountyTaken(string x) {

	if (x == "nate" || x == "Nate") {
		cout << "\nHey! That's me, the creator of this here program, and I'll be damned if you managed to cash in a bounty on me!";
	}
}
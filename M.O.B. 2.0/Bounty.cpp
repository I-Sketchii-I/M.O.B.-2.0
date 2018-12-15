#include "pch.h"
#include <string>
#include "Person.h"
#include "Bounty.h"


using namespace::std;

//creates class and calls inheritance from Persson class
class Bounty : public Person
{
	//public sector
	public:
		string setStatus();
		string getStatus();

	//values held by the object
	string status;
	//functions to set and return values
	string setStatus() {
		cin >> status;
	};
	string getStatus() {
		cout << status;
	};

	//inherist the functions from parent class
	Person::getName;
	Person::getAge;
	Person::getLocation;

	//Constructor
	Bounty(){
	};


	//Private secrtor
	private:
		int value;
};

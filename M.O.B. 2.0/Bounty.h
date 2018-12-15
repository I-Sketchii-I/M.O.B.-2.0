#ifndef BOUNTY_H_
#define BOUNTY_H_
//#pragma once
#include <iostream>
#include <string>
#include "Person.h"

class Bounty : public Person {

public:
	//values held by the object
	//functions to set and return values
	std::string setStatus();
	std::string getStatus();

	//inherist the functions from parent class
	Person::getName;
	Person::getAge;
	Person::getLocation;

private:
	int value;
};
#endif
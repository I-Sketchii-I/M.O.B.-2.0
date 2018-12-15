#ifndef PERSON_H_
#define PERSON_H_
//#pragma  once
#include <string>

class Person {

public:
	//setters
	std::string setName();
	int setAge();
	std::string setLocation();

	//getters
	std::string getName();
	int getAge();
	std::string getLocation();

};

#endif
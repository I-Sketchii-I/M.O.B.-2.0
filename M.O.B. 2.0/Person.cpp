#include "pch.h"
#include <iostream>
#include <string>
#include "Person.h"

using namespace::std;

class Person {

	

		//values held by the object
		string name;
		int age;
		string location;
		//functions to set and return values

		//setters
public:
		string setName()
		{
			cin >> name;
		};
		int setAge()
		{
			cin >> age;
		};
		string setLocation()
		{
			cin >> location;
		};

		//getters
		string getName()
		{
			cout << name;
		};
		int getAge()
		{
			cout << age;
		};
		string getLocation()
		{
			cout << location;
		};

		Person()
		{
		};

};
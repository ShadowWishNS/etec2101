#pragma once		//shorthand for the #ifndef/#define/.../#endif
					//prevents compiler from seeing class declaration twice

#include <string>

class Person {
	//Attributes -- variable for all instances of the class
public:
	int id;
	std::string first_name;
	std::string last_name;
	float hourly_rate;
	unsigned int hours_worked;

	//METHOD -- a function that instances of the class can call
	float calculate_wage();

};
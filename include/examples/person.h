#pragma once		//shorthand for the #ifndef/#define/.../#endif
					//prevents compiler from seeing class declaration twice

#include <string>

class Person {
	//Attributes -- variable for all instances of the class
private:
	int id;
	std::string first_name;
	std::string last_name;
	float hourly_rate;
	unsigned int hours_worked;
public:
	//Constructor
	Person();
	Person(int starting_id, std::string starting_fname, std::string starting_lname);

	//GET
	int get_id();
	std::string get_firstname();
	std::string get_lastname();
	float get_hourly_rate();
	unsigned int get_hours_worked();

	//SET
	void set_hourly_rate();
	void set_hours_worked();


	//METHOD -- a function that instances of the class can call
	float calculate_wage();

};
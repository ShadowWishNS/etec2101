#pragma once
#include <person.h>

namespace example
{
	class PersonDatabase
	{
	private:
		int* temp;		
		int x = 70;
		// temp = &x;
		// temp = (int*)malloc(sizeof(int) * 100); // an array of 100 ints
		// temp[0] = 77;
		// temp[1] = 78;
	

		Person* my_array;			
		
		unsigned int my_array_size;	
									
	public:
		
		PersonDatabase(std::string fname);

		// Adds a person
		void add_person(Person p);
	};
}
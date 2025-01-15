#include <iostream>
#include <string.h>
#include <string>
#include <person.h>


using namespace std;		// makes the std :: stuff optional

int main()
{
	int x = 42;
	float y = 3.14f;
	
	std::cout << "x=" << x << "\nHello World! \n";
	cin >> x;	// Waiting for the user to enter a value for x

	char name[32] = "Fronnz Jabber";		//c style (changeable)
	const char* name2 = "Gerude Keckler";	//c style (Non-changeable string literal)
	strcpy_s(name, "Fronnz Jabber");			//copy a new literal onto a name
	x = strlen(name);						//string length


	std::string cpp_name = "Blurb Johan";	//internally, number of chars still important
	cpp_name = "Blurben Johansan";			//no strcpy needed
	x = cpp_name.length();					//like strlen
	if (cpp_name < "mmmm")
		std::cout << "cpp_name is alphabetically less that mmmm\n";
	name2 = cpp_name.c_str();				//getting the underlying C char pointer


	//Goal with DS is to make constructs like this to simplify for user.


	Person p;
	Person q;

	p.first_name = "Jorgun";
	p.last_name = "Whismer";
	q.first_name = "Hawkin";
	q.last_name = "Nolan";

}
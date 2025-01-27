#include <person.h>
#include <person_database.h>

int main(int argc, char** argv)
{
	// In this constructor, you'll read in the contents of the
	// text file into an array of Person objects. DO NOT use any
	// container types (std::vector, std::list, etc. )

	example::PersonDatabase PD(". .\\. .\\media\\persondb. txt");
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

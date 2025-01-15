#include <person.h>


//We are providing the BODY of the method we declared in our header file
float Person::calculate_wage() {
	// In any (non-static) method, we have access to all attributes for this
	// instance. Our job in this method is to tell the compiler HOW to
	// calulate a wage using our attributes.
	return hourly_rate * hours_worked;
}
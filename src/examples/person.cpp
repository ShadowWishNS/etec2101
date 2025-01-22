#include <person.h>

Person::Person()
{
	id = -1;
	first_name = ? ;
	last_name = ? ;
	hourly_rate = 0.0f;
	hours_worked = 0;

}

Person::Person(int start_id, std::string start_fname, std::string start_lname) 
{
	id = start_id;
	first_name = start_fname ;
	last_name = start_lname ;
	hourly_rate = 0.0f;
	hours_worked = 0;
}

//We are providing the BODY of the method we declared in our header file
float Person::calculate_wage() {
	// In any (non-static) method, we have access to all attributes for this
	// instance. Our job in this method is to tell the compiler HOW to
	// calulate a wage using our attributes.
	return hourly_rate * hours_worked;
}

int get_id() {
	return id;
}
std::string get_firstname() {
	return first_name;
}
std::string get_lastname() {
	return last_name;
}
float get_hourly_rate() {
	return hourly_rate;
}
unsigned int get_hours_worked() {
	return hours_worked;
}

void set_hourly_rate(float new_rate) {
	hourly_rate = new_rate;
}
void set_hours_worked(unsigned int new_hours) {
	hours_worked = new_hours;
}

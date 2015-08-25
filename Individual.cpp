// Class Indivdual (Solution)

#include "Individual.h"

// --------------------------------------------------
double Individual::rand0_p1(){
	double r;
	r = ((double)rand() / RAND_MAX)*.1;
	return r;
}
// --------------------------------------------------
double Individual::rand0_1(){
	double r;
	r = (double)rand() / RAND_MAX;
	return r;
}
// --------------------------------------------------
double Individual::rand0_10(){
	double r;
	r = ((double)rand() / RAND_MAX)*10;
	return r;
}
// --------------------------------------------------
double Individual::rand0_100(){
	double r;
	r = ((double)rand() / RAND_MAX) * 100;
	return r;
}
// --------------------------------------------------
// input_x function
double Individual::input_x(){
	int x = rand0_1();
	return x;
}
// --------------------------------------------------
// approx function
double Individual::approx_func(){
	// population_set's value at input_x()
	return approx_value;
}
// --------------------------------------------------
// real function
double Individual::real_func(){
	// real functions value at input_x()
	return real_value;
}
// --------------------------------------------------
// fitness_rating()
double Individual::fitness_rating(){
	fit_rating = -abs(real_func() - approx_func());
}
// --------------------------------------------------
// Compare fit_rating 
// compare all population_set's fit_rating's,
// select top some % for replication and bottom some % for replacement/mutation

// --------------------------------------------------


// --------------------------------------------------
	//Set Amount of Functions
void Individual::set_num_functions(int n){
	n = num_functions;
}
	// Get Amount of Functions
int Individual::get_num_functions(){
	return num_functions;
}
// --------------------------------------------------
	// Build Solutions
 void Individual::build_solution(){
	for (int s = 0; s < (2 * num_functions); s++)
	{
		solution_set.push_back(rand0_p1());	// random 0-.1

		// TODO- fill with 0-.1, 0-1, 0-10, 0-100 random value solutions
	}
}
// --------------------------------------------------
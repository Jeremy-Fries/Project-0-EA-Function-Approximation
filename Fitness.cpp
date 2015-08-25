// Class Fitness

#include "Fitness.h"

// --------------------------------------------------
// input_x function
double Fitness::input_x(Individual* pI){
	pI->rand0_1();
}
// --------------------------------------------------
// approx function
double Fitness::approx_func(){
	// population_set's value at input_x()
	return approx_value;
}
// --------------------------------------------------
// real function
double Fitness::real_func(){
	// real functions value at input_x()
	return real_value;
}
// --------------------------------------------------
// fitness_rating()
double Fitness::fitness_rating(){
	fit_rating = -abs(real_func() - approx_func());
}
// --------------------------------------------------
// Compare fit_rating 
	// compare all population_set's fit_rating's,
	// select top some % for replication and bottom some % for replacement/mutation

// --------------------------------------------------
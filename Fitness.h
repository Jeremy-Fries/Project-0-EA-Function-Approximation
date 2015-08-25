// Class Fitness

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include "Individual.h"
#include "Population.h"
//#include "Function file from logan.h"

using namespace std;

#ifndef Fitness_H
#define Fitness_H

class Fitness{

public:
	// --------------------------------------------------
		// input_x function
	double input_x(Individual* pI);
	// --------------------------------------------------
		// approx function
	double approx_func();
	// --------------------------------------------------
		// real function
	double real_func();
	// --------------------------------------------------
		// fitness_rating()
	double fitness_rating();
	// --------------------------------------------------
		// Compare fit_rating

	// --------------------------------------------------
private:
	// Variables 
	double fit_rating, approx_value, real_value;

};
#endif //Fitness_H
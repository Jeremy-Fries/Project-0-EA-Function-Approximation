// Class Individual (Solution)

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

#ifndef Individual_H
#define Individual_H

class Individual{

public:
	// --------------------------------------------------
	double rand0_p1(void);
		// returns random number between 0-.1
	// --------------------------------------------------
	double rand0_1(void);
		// returns random number between 0-1
	// --------------------------------------------------
	double rand0_10(void);
		// returns random number between 0-10
	// --------------------------------------------------
	double rand0_100(void);
		// returns random number between 0-100
	// --------------------------------------------------
	// input_x function
	double input_x();
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
	// Set Number of Functions
	void set_num_functions(int);
	// Get Number of Functions
	int get_num_functions();
	// --------------------------------------------------
	// Build Solution
	void build_solution();
	// return solution set
	//get_solution_set()

private:
	// Variables 
	int num_functions;
	vector <double> solution_set;
	double fit_rating, approx_value, real_value;

};
#endif //Individual_H
// Class Population

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include "Individual.h"

using namespace std;

#ifndef Population_H
#define Population_H
class Population{

public:
	// --------------------------------------------------
		// Set Population Size
	void set_pop_size(int);
		// Get Population Size
	int get_pop_size();
	// --------------------------------------------------
		// Build_Population
	void build_pop(int n);
	// --------------------------------------------------
		// Get population_set
	vector <Individual>& get_population_set();
	// --------------------------------------------------
	// double f_approx(double x_pos, vector<double> soln);
	// --------------------------------------------------
		// Random integer between 0 and pop_size
	int rand_int();
	// --------------------------------------------------
		// Build New Population
	void build_new_pop();
	// --------------------------------------------------
	// Get New Population Sset
	vector <Individual>& get_new_population_set();
	// --------------------------------------------------



	// Replicate Function


	// --------------------------------------------------
	// Mutate Function


	// --------------------------------------------------
	// Replace Function


	// --------------------------------------------------
private:
	// Variables 
	int pop_size;
	double x_pos;
	vector <Individual> population_set;
	vector <Individual> new_population_set;
};
#endif //Population_H
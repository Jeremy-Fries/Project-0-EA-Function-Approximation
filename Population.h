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
	vector <Individual>& display_population_set();
	// --------------------------------------------------
	// double f_approx(double x_pos, vector<double> soln);
	// --------------------------------------------------
		// Random integer between 0 and pop_size
	int rand_int();

	void calc_fitness();
	// --------------------------------------------------
	//	// Build New Population
	//void build_new_pop();
	//// --------------------------------------------------
	//// Get New Population Sset
	//vector <Individual>& display_new_population_set();
	// --------------------------------------------------
	void down_select();

	// Replicate Function
	void replicate();

	// --------------------------------------------------
	// Mutate Function
	void mutate();

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
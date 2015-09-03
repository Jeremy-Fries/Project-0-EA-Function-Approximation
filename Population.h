// Class Population

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include "Individual.h"
#include <ostream>

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
		// Display Population Size
	void display_pop_size();
	// --------------------------------------------------
		// Set Number of Generations
	void set_num_gen(int);
		// Get Number of Generations
	int get_num_gen();
		// Display Number of Generations
	void display_num_gen();
	// --------------------------------------------------
		// Build_Population
	void build_pop(int n);
		// Get population_set
	vector <Individual>& get_population_set();
		// Display population_set
	vector <Individual>& display_population_set();
	// --------------------------------------------------
		// Fitness calculation
	void calc_fitness();
	// --------------------------------------------------
		// Down Select Function
	void down_select();
	// --------------------------------------------------
		// Replicate Function
	void replicate();
	// --------------------------------------------------
		// Generation Loop
	void generation_loop();
	// --------------------------------------------------
	void choose_new_x(double);
	void zero_fit_rating();

private:
	// Variables 
	int pop_size, num_gen;
	double x_pos;
	vector <Individual> population_set;
};
#endif //Population_H
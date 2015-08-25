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
	void build_pop(Individual* pI);
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
	vector <double> population_set;
};
#endif //Population_H
// Class Population

#include "Population.h"

// --------------------------------------------------
	// Set Population Size
void Population::set_pop_size(int p){
	p = pop_size;
}
	// Get Population Size
int Population::get_pop_size(){
	return pop_size;
}
// --------------------------------------------------
// Build_Population
void Population::build_pop(Individual* pI){
	for (int p = 0; p < pop_size; p++){
		pI->build_solution();
		population_set.push_back(*pI);	// TODO- fix error ---------///////////----------
		// push back fit_rating as well! 
	}
}
// --------------------------------------------------
// Replicate Function


// --------------------------------------------------
// Mutate Function


// --------------------------------------------------
// Replace Function


// --------------------------------------------------
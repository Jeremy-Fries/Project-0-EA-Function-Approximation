// Project ZER0 - EA Function Approximation

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "Individual.h"
#include "Population.h"
#include "Fitness.h"

using namespace std;

class Individual;
class Population;
//class Fitness; 

// --------------------------------------------------
// 1. Deffiniton of Individuals
// 2. Fitness Funtion
// 3. Population
// 4. Parent Selection Mechanism
// 5. Variation Operators
// 6. Recombonation
// 7. Mutation
// 8. Survivor Selection Mechanism (Replacement)
// --------------------------------------------------


int main()
{
	// Set Objects
	Individual individual_1;
	Population population_1;
	//Fitness fitness_1;

	Individual* pI = &individual_1;
	Population* pP = &population_1;
	//Fitness* pF = &fitness_1;

	pP->set_pop_size(100);		// Set Population Size
	pI->set_num_functions(2);	// Set Number of Functions

	// Build Population

	// ---For LOOP---
	// Fitness

	// Down Select

	// Mutation

	// Replicate

	// New Generation

	// Repeat







}
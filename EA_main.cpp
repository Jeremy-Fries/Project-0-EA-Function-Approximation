// Project ZER0 - EA Function Approximation

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "Individual.h"
#include "Population.h"
#include <time.h>

using namespace std;

class Individual;
class Population;

int main()
{
	// Set Random Numbers 
	srand(time(NULL));
	//---------------------------------------------
	// Variables only in MAIN
	char e;
	//---------------------------------------------
		// Set Objects
	Individual individual_1;
	Population population_1;
	Individual* pI = &individual_1;
	Population* pP = &population_1;
		// Set Number of Functions
	pI->set_num_functions(2);			
		// Set Population Size
	pP->set_pop_size(10);
		// Set Number of Generations
	pP->set_num_gen(100);
	//---------------------------------------------
		// Initialize Build Population - Creates initial population 
	pP->build_pop(pI->get_num_functions());
	pP->display_population_set();
	//---------------------------------------------
		// Generation Loop
	pP->generation_loop();
	//---------------------------------------------

	//				ENDING STATMENT

		// Display Best Approximate Solution 
	cout << endl << "Best Approx Solution is: " << "place holder" << endl;
	
		// Display Real Coefficient
	cout << endl << "Real Coefficient is: " << "place holder" << endl;
	//pP->display_population_set();
	
		// Display Number of Functions
	pI->display_num_functions();
		// Display Population Size
	pP->display_pop_size();
		// Display Number of Generations
	pP->display_num_gen();
		// To stop command screen from clossing
	cout << endl << "e to exit";
	cin >> e;
	//---------------------------------------------

}
// Project ZER0 - EA Function Approximation

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "Individual.h"
#include "Population.h"

using namespace std;

class Individual;
class Population;

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
	char e;

	// Set Objects
	Individual individual_1;
	Population population_1;

	Individual* pI = &individual_1;
	Population* pP = &population_1;

	// Set Number of Functions
	pI->set_num_functions(2);			

	// Set Population Size
	pP->set_pop_size(10);

	pI->build_real_set(pI->get_num_functions());

	// --------------------------------------------
	// Build Solution for TESTING, do not need
	//pI->build_solution(pI->get_num_functions());
	//pI->get_solution_set();
	//---------------------------------------------
	// Set x_pos
	//pI->set_x_pos0_p1();
	//pI->real_func();
	//pI->approx_func();
	//pI->fitness_rating();
	//---------------------------------------------
	// Build Population
	pP->build_pop(pI->get_num_functions());
	pP->get_population_set();
	//---------------------------------------------
	// Build New Population
	pP->build_new_pop();
	pP->get_new_population_set();
	//---------------------------------------------
	// To stop cpmmand screen from clossing
	cout << endl << "e to exit";
	cin >> e;

	// ---For LOOP---
	// Fitness

	// Down Select

	// Mutation

	// Replicate

	// New Generation

	// Repeat

	// -----------------------------------------------------------------------------------------------------------
	/*Co-coding notes.

	-to access
P.population_set.at(ith).solution_set.at(jth)
/// population P
/// has a vector of individuals, population_set
/// access ith individual
/// that individual has a vector<double> solution_set
/// access the jth element of that vector

vector< vector<double> > a

a.at(ith).at(jth)

http:/stackoverflow.com/questions/29676147/sorting-a-vector-of-classes-based-on-a-variable-in-the-class

-> Binary Tournament Selection
(pseudocode)
A, B
if A.fitness > B.fitness
erase(B)
return; break;
if B.fitness < A.fitness
erase(A)
return;


double f_approx(double x, vector<double> soln){
double a,b,c,d,e;
a = f_1(x,soln.at(0),soln.at(1));
b = f_2(x,soln.at(2),soln.at(3));
c = f_3(x,soln.at(4),soln.at(5));
...
...
return (a+b+c+d+e);
}

fitness = fabs(f_approx - f_test);
---------------------------------------------------------------
vector<double>* pv;

pv = &machineWinnings.at(r);

pull(machineMedian.at(r),machineRange.at(r), pv);


*/
// ---------------------------------------------------------------




}
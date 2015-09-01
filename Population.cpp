// Class Population

#include "Population.h"

// --------------------------------------------------
	// Set Population Size
void Population::set_pop_size(int p){
	pop_size = p;
}
	// Get Population Size
int Population::get_pop_size(){
	return pop_size;
}
// --------------------------------------------------
	// Build population_set
void Population::build_pop(int n){
	for (int p = 0; p < pop_size; p++){
		Individual I;
		I.set_num_functions(n);
		I.build_solution(n);
		population_set.push_back(I);
		I.set_x_pos0_1();
		I.build_real_set(n);
		I.fitness_rating();
		I.display_x_pos();
	}
}
	// Get population_set									
vector<Individual>& Population::get_population_set() {
	for (int i = 0; i < pop_size; i++){
		population_set.at(i).get_solution_set();
		cout << endl;
	}
	return population_set; 
}
// --------------------------------------------------
/* Tournament Selection
while (nextPopulation too small) {
Members tournament = randomly choose x members from currentPopulation

if(crossover){
Member parents = select best two members from tournament
Member children = crossover(parents)
nextPopulation.add(children);
} else {
Member parent = select best one member from tournament
Member child = mutate(parent)
nextPopulation.add(child);
}
}
*/

// --------------------------------------------------
// Compare fit_rating 
// compare all population_set's fit_rating's,
// select top some % for replication and bottom some % for replacement/mutation

// -------------------------------------------------- maybe
// Build Fitness
//void Individual::build_fitness(int n){
//	num_functions = n;
//}








// -------------------------------------------------- 
/*
double f_approx(double x, vector<double> soln){								// Initialize f_1-f_6 ??????
	double a, b, c, d, e;
	for (auto i = population_set.begin(); i != population_set.end(); i++) {
		a = f_1(x, solution_set.at(0), solution_set.at(1));
		b = f_2(x, solution_set.at(2), solution_set.at(3));
		//c = f_3(x, pI->solution_set.at(4), pI->solution_set.at(5));
		//d = f_4(x, pI->solution_set.at(6), pI->solution_set.at(7));
		//e = f_5(x, pI->solution_set.at(8), pI->solution_set.at(9));
		return (a + b);
		// return (a + b + c + d + e);
	}
}
*/

// --------------------------------------------------
// Replicate Function


// --------------------------------------------------
// Mutate Function


// --------------------------------------------------
// Replace Function


// --------------------------------------------------
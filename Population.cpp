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
void Population::calc_fitness(){
	for (int p = 0; p < pop_size; p++){
		population_set.at(p).fitness_rating();
	}
}
// --------------------------------------------------
	// Build population_set
void Population::build_pop(int n){
	double pre_x = ((double)rand() / RAND_MAX);
	double x = pre_x * 2*3.1416;
	cout << "pre_x is: " << pre_x << endl;
	cout << "x is: " << x << endl;
	for (int p = 0; p < pop_size; p++){
		Individual I;
		I.set_num_functions(n);
		I.build_solution(n);
		I.set_x_pos(x); 
		I.build_real_set(n);
		I.display_x_pos();
		population_set.push_back(I);
	}
}
	// Get population_set									// split into 2
vector<Individual>& Population::display_population_set() {
	for (int i = 0; i < pop_size; i++){
		population_set.at(i).get_solution_set();
		cout << endl;
	}
	return population_set; 
}
// --------------------------------------------------
void Population::down_select(){
	cout << "size in is: " << population_set.size() << endl;
	int eliminate = pop_size / 2;
	for (int i=0; i < eliminate; i++){
		int dex1, dex2;
		dex1 = rand() % population_set.size();
		dex2 = rand() % population_set.size();
		while (dex2 == dex1){
			dex2 = rand() % population_set.size();
		}
		cout << "1fit = " << population_set.at(dex1).fit_rating << endl;
		cout << "2fit = " << population_set.at(dex2).fit_rating << endl;
		if (population_set.at(dex1).fit_rating>population_set.at(dex2).fit_rating){
			// dex1 should survive.
			cout << "1 should survive" << endl;
			population_set.erase(population_set.begin() + dex2);
		}
		else if (population_set.at(dex1).fit_rating < population_set.at(dex2).fit_rating){
			cout << "2 should survive" << endl;
			// dex2 should survive.
			population_set.erase(population_set.begin() + dex1);
		}
	}
	cout << "size is: " << population_set.size() << endl;
}
// --------------------------------------------------
void Population::replicate(){
	int replicating = pop_size / 2;
	for (int i = 0; i < replicating; i++){
		int dex1;
		dex1 = rand() % population_set.size();
		// dex1 should replicate.
		Individual I = population_set.at(dex1);
		I.mutate();		// Mutating up to 2 different index of the individual
		I.mutate();		// Reason 9/1/15 11 a.m.
		population_set.push_back(I);

	}
}
// --------------------------------------------------
	// Random integer between 0 and pop_size
int Population::rand_int(){
	int p = pop_size;
	int r = rand() % p;
	cout << "rand_int is: " << r << endl;
	return r;
}
// -----------------------------------------------
//	// Build new_population_set
//void Population::build_new_pop(){
//	cout << "Build POP IN" <<endl;
//	for (int p = 0; p < pop_size; p++){
//		Individual A = population_set.at(rand_int());		
//		Individual B = population_set.at(rand_int());
//		cout << "A.fit_rating: " << A.fit_rating << endl;
//		cout << "B.fit_rating: " << B.fit_rating << endl;
//		if (A.fit_rating  > B.fit_rating){
//			new_population_set.push_back(A);
//			//new_population_set.push_back(mutate(A));
//			break;
//		}
//		else if (A.fit_rating  < B.fit_rating){
//			new_population_set.push_back(B);
//			//new_population_set.push_back(mutate(B));
//			break;
//		}
//		else {
//			cout << endl << "error 1569" << endl;
//			break;
//		}
//	}   
//	cout << "Build POP OUT" << endl;
//}
//// Get new_population_set									
//vector<Individual>& Population::get_new_population_set() {
//	for (int i = 0; i < pop_size; i++){
//		new_population_set.at(i).get_solution_set();
//		cout << endl;
//	}
//	return new_population_set;
//}
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
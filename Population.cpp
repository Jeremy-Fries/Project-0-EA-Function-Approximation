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
	// Display Population Size
void Population::display_pop_size(){
	cout << endl << "Size of Populatoin is: " << pop_size << endl;
}
// --------------------------------------------------
	// Set Number of Generations
void Population::set_num_gen(int g){
	num_gen = g;
}
	// Get Number of Generations
int Population::get_num_gen(){
	return num_gen;
}
	// Display Number of Generations
void Population::display_num_gen(){
	cout << endl << "Number of Generations is: " << num_gen << endl;
}
// --------------------------------------------------
	// Build population_set // Run Once
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
		I.build_real_set();
		I.display_x_pos();
		population_set.push_back(I);
	}
}
	// Get population_set
vector<Individual>& Population::get_population_set() {
	return population_set;
}
	// Display population_set								
vector<Individual>& Population::display_population_set() {
	for (int i = 0; i < pop_size; i++){
		population_set.at(i).display_solution_set();
		
		population_set.at(i).display_fit_rating();
		cout << endl;
	}
	return population_set;
}
// --------------------------------------------------
	// Fitness calculation
void Population::calc_fitness(){
	for (int p = 0; p < pop_size; p++){
		population_set.at(p).fitness_rating();
		//population_set.at(p).display_fit_rating();
	}
}
// --------------------------------------------------
	// Down Select Function
void Population::down_select(){
	//cout << "size in is: " << population_set.size() << endl;
	int eliminate = pop_size / 2;
	for (int i=0; i < eliminate; i++){
		int dex1, dex2;
		dex1 = rand() % population_set.size();
		dex2 = rand() % population_set.size();
		while (dex2 == dex1){
			dex2 = rand() % population_set.size();
		}
		//cout << "1fit = " << population_set.at(dex1).fit_rating << endl;
		//cout << "2fit = " << population_set.at(dex2).fit_rating << endl;
		if (population_set.at(dex1).fit_rating>population_set.at(dex2).fit_rating){
			// dex1 should survive.
			//cout << "1 should survive" << endl;
			population_set.erase(population_set.begin() + dex2);
		}
		else if (population_set.at(dex1).fit_rating < population_set.at(dex2).fit_rating){
			//cout << "2 should survive" << endl;
			// dex2 should survive.
			population_set.erase(population_set.begin() + dex1);
		}
	}
	//cout << "size is: " << population_set.size() << endl;
}
// --------------------------------------------------
	// Replicate Function
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
	// Generation Loop
void Population::generation_loop(){
	for (int g = 0; g < num_gen; g++){
		zero_fit_rating();
		for (int q = 0; q < 20; q++){
			calc_fitness();
			double pre_x = ((double)rand() / RAND_MAX);
			double x = pre_x * 2 * 3.1416;
			choose_new_x(x);
		}
		if (g == num_gen - 1){
			break;
		}
		down_select();
		replicate();
	}
	// Best Fitness Rating Function - picks best approx solution set		// TODO
}
// --------------------------------------------------
void Population::choose_new_x(double nx){
	for (int p = 0; p < pop_size; p++){
		population_set.at(p).set_x_pos(nx);
	}
}
void Population::zero_fit_rating(){
	for (int p = 0; p < pop_size; p++){
		population_set.at(p).zero_fit_rating();
	}
}
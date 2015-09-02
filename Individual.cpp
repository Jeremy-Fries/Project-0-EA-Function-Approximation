// Class Indivdual (Solution)

#include "Individual.h"

// --------------------------------------------------
double Individual::rand0_p1(){
	double r;
	r = ((double)rand() / RAND_MAX)*.1;
	return r;
}
// --------------------------------------------------
double Individual::rand0_1(){
	double r;
	r = (double)rand() / RAND_MAX;
	return r;
}
// --------------------------------------------------
double Individual::rand0_10(){
	double r;
	r = ((double)rand() / RAND_MAX)*10;
	return r;
}
// --------------------------------------------------
double Individual::rand0_100(){
	double r;
	r = ((double)rand() / RAND_MAX) * 100;
	return r;
}
// --------------------------------------------------
	// Set x position to desired value
void Individual::set_x_pos(double x){
	x_pos = x;
}
	// Set x position random number between 0 and .1
void Individual::set_x_pos0_p1(){
	x_pos = (double)rand() / RAND_MAX*.1;
}
	// Set x position random number between 0 and 1
void Individual::set_x_pos0_1(){
	x_pos = (double)rand() / RAND_MAX;
}
	// Set x position random number between 0 and 10
void Individual::set_x_pos0_10(){
	x_pos = (double)rand() / RAND_MAX * 10;
}
	// Set x position random number between 0 and 100
void Individual::set_x_pos0_100(){
	x_pos = (double)rand() / RAND_MAX * 100;
}
	// Get x position
double Individual::get_x_pos(){
	return x_pos;
}
void Individual::display_x_pos(){
	cout << "\t x_pos is: " << x_pos << endl;
}
// --------------------------------------------------
	//Set Amount of Functions
void Individual::set_num_functions(int n){
	num_functions = n;
}
	// Get Amount of Functions
int Individual::get_num_functions(){
	return num_functions;
}
// --------------------------------------------------
	// Build Real Coefficient Set
void Individual::build_real_set(int n){
	num_functions = n;
	//for (int s = 0; s < (2 * num_functions); s++)
	//{

		real_set.push_back(0);	// inputs 0.5 for a1, b1, a2, b2, ...
		real_set.push_back(0);
		real_set.push_back(1);
		real_set.push_back(1);
	//}
}
// --------------------------------------------------
	// Build Solutions
void Individual::build_solution(int n){
	num_functions = n;
	for (int s = 0; s < (2 * num_functions); s++)
	{
		solution_set.push_back(rand0_p1());	// random 0-.1

		// TODO- fill with 0-.1, 0-1, 0-10, 0-100 random value solutions
	}
}
// --------------------------------------------------
	// Get Solutions
vector<double>& Individual::get_solution_set() {
	cout << endl << "Solution set is: ";
	std::copy(solution_set.begin(), solution_set.end(), std::ostream_iterator<double>(std::cout, " "));
	return solution_set;
}
// --------------------------------------------------
	// Funtions - will be implemented in a header file at a later time
double Individual::f_1(double x, double a1, double b1){
	double f = (a1*abs(x*x)) + b1;
	return f;
}
double Individual::f_2(double x, double a2, double b2){
	double f = a2*(sin((b2+1)*x));
	return f;
}
// --------------------------------------------------
	// Approx function Value - solution_set's value at x_pos					// TODO-Need to set x_pos before calling
double Individual::approx_func(){
	double x = get_x_pos();
	double a, b;
	a = f_1(x, solution_set.at(0), solution_set.at(1));
	b = f_2(x, solution_set.at(2), solution_set.at(3));
	approx_value = (a + b);
	//cout << endl << "Approximate Value is: " << approx_value << endl;
	return approx_value;
}
// --------------------------------------------------
	// Real Function Value - real coefficient_set's value at x_pos
double Individual::real_func(){
	double x = get_x_pos();
	double a, b;
	a = f_1(x, real_set.at(0), real_set.at(1));
	b = f_2(x, real_set.at(2), real_set.at(3));
	real_value = (a + b);
	//cout << endl << "real value is: " << real_value << endl;
	return real_value;
}
// --------------------------------------------------
	// Fitness Rating
double Individual::fitness_rating(){
	fit_rating = -abs(real_func() - approx_func());
	cout << endl << "Fitness Rating is: " << fit_rating;
	return fit_rating;
}
// --------------------------------------------------
// Mutate Function
void Individual::mutate(){
	// randomly choose an element from the solution set and add random + or - number.
	int nu = num_functions;
	int dex = rand() % nu;
	//int dex = 1;
	double range = 0.01;
	double r1 = ((double)rand() / RAND_MAX) * range;
	double r2 = ((double)rand() / RAND_MAX) * range;
	solution_set.at(dex) += r1 - r2;
}
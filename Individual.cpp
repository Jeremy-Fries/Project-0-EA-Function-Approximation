// Class Indivdual (Solution)

#include "Individual.h"

// -------------------------------------------------- 
	// Random Number between 0 and 1
double Individual::rand01(){
	double r;
	r = ((double)rand() / RAND_MAX);
	return r;
}
// --------------------------------------------------
	// Set x position to desired value
void Individual::set_x_pos(double x){
	x_pos = x;
}
	// Get x position
double Individual::get_x_pos(){
	return x_pos;
}
	// Display x position
void Individual::display_x_pos(){
	cout << "\t x_pos is: " << x_pos << endl;
}
// --------------------------------------------------
	//Set Number of Functions
void Individual::set_num_functions(int n){
	num_functions = n;
}
	// Get Number of Functions
int Individual::get_num_functions(){
	return num_functions;
}
	// Display Number of Functions
void Individual::display_num_functions(){
	cout << endl << "Number of Functions is: " << num_functions << endl;
}
// --------------------------------------------------
	// Build Solutions Set
void Individual::build_solution(int n){
	num_functions = n;
	for (int s = 0; s < (2 * num_functions); s++)
	{
		solution_set.push_back(rand01()*0.1);	// random number between 0 - 0.1
		// TODO- fill with 0-.1, 0-1, 0-10, 0-100 random value solutions
	}
}
// --------------------------------------------------
	// Get Solutions Set
vector<double>& Individual::get_solution_set() {
	return solution_set;
}
// --------------------------------------------------
	// Display Solution Set
vector<double>& Individual::display_solution_set() {
	cout << endl << "Solution set is: " << endl;
	std::copy(solution_set.begin(), solution_set.end(), std::ostream_iterator<double>(std::cout, " "));
	return solution_set;
}
// --------------------------------------------------			// TODO - MOVE to Function 
	// Build Real Coefficient Set
void Individual::build_real_set(){
	// [ a1 b1 a2 b2]
	// Creates [0 0 1 1]
	real_set.push_back(0);
	real_set.push_back(0);
	real_set.push_back(1);
	real_set.push_back(1);
}
// --------------------------------------------------			// TODO - MOVE to Function 
	// Display Real Coefficient Set
vector<double>& Individual::display_real_set() {
	cout << endl << "Real Coefficient set is: " << endl;
	std::copy(real_set.begin(), real_set.end(), std::ostream_iterator<double>(std::cout, " "));
	return real_set;
}
// --------------------------------------------------			// TODO - MOVE to Function 
	// Funtions - will be implemented in a header file at a later time
double Individual::f_1(double x, double a1, double b1){
	double f = (a1*abs(x*x)) + b1;
	return f;
}
double Individual::f_2(double x, double a2, double b2){
	double f = a2*(sin((b2+1)*x));
	return f;
}
// --------------------------------------------------			// TODO - MOVE to Function 
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
	// Approx function Value - solution_set's value at x_pos		
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
	// Fitness Rating
double Individual::fitness_rating(){
	fit_rating = -abs(real_func() - approx_func());
	cout << endl << "Fitness Rating is: " << fit_rating << endl;
	return fit_rating;
}
// --------------------------------------------------
	// Mutate Function
		// randomly choose an element from the solution set and add random + or - number.
void Individual::mutate(){
	int nu = num_functions;
	int dex = rand() % nu;
	double range = 0.01;
	double r1 = ((double)rand() / RAND_MAX) * range;
	double r2 = ((double)rand() / RAND_MAX) * range;
	solution_set.at(dex) += r1 - r2;
}
// --------------------------------------------------
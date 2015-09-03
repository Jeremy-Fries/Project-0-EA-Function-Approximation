// Class Individual (Solution)

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <ostream>

using namespace std;

#ifndef Individual_H
#define Individual_H

class Individual{
	friend class Population;
public:
	// --------------------------------------------------
	double rand01(void);
	// --------------------------------------------------
		// Set x position to desired value
	void set_x_pos(double);
		// Get x position
	double get_x_pos();
		// Display x position
	void display_x_pos();
	// --------------------------------------------------
		// Set Number of Functions
	void set_num_functions(int);
		// Get Number of Functions
	int get_num_functions();
		// Display Number of Functions
	void display_num_functions();
	// --------------------------------------------------
		// Build Solution
	void build_solution(int n);
		// Return Solution Set
	vector <double>& get_solution_set();
		// Display Solution Set
	vector <double>& display_solution_set();
	// --------------------------------------------------			// TODO - MOVE to Function File
		// Build Real Coefficient Set
	void build_real_set();
		// Display Real Coefficient Set
	vector <double>& display_real_set();
	// --------------------------------------------------			// TODO - MOVE to Function File
		// Funtions
	double f_1(double x, double a1, double b1);
	double f_2(double x, double a2, double b2);
	//double f_3(double x, double a3, double b3);
	//double f_4(double x, double a4, double b4);
	//double f_5(double x, double a5, double b5);
	// --------------------------------------------------			// TODO - MOVE to Function File
		// Real Function Value
	double real_func();
	// --------------------------------------------------
		// Approximate Function Value
	double approx_func();
	// --------------------------------------------------
		// Fitness Rating
	void fitness_rating();
	void zero_fit_rating();
		// Display Fitness Rating
	void display_fit_rating();
	// --------------------------------------------------
		// Mutate Function
	void mutate();
	// --------------------------------------------------
private:
	// Variables 
	int num_functions;
	vector <double> solution_set;
	vector <double> real_set;
	double x_pos, fit_rating, approx_value, real_value;

};
#endif //Individual_H
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
	double rand0_p1(void);
		// returns random number between 0-.1
	// --------------------------------------------------
	double rand0_1(void);
		// returns random number between 0-1
	// --------------------------------------------------
	double rand0_10(void);
		// returns random number between 0-10
	// --------------------------------------------------
	double rand0_100(void);
		// returns random number between 0-100
	// --------------------------------------------------
		// input_x function
	void set_x_pos(int);
	void set_x_pos0_p1();
	void set_x_pos0_1();
	void set_x_pos0_10();
	void set_x_pos0_100();
	double get_x_pos();
	// --------------------------------------------------
		// Set Number of Functions
	void set_num_functions(int);
		// Get Number of Functions
	int get_num_functions();
	// --------------------------------------------------
		// Build Real Coefficient Set
	void build_real_set(int n);

	// --------------------------------------------------
		// Build Solution
	void build_solution(int n);
		// Return Solution Set
	vector <double>& get_solution_set();
	// --------------------------------------------------
		// Funtions
	double f_1(double x, double a1, double b1);
	double f_2(double x, double a2, double b2);
	//double f_3(double x, double a3, double b3);
	//double f_4(double x, double a4, double b4);
	//double f_5(double x, double a5, double b5);
	// --------------------------------------------------
		// Approximate Function Value
	double approx_func();
	// --------------------------------------------------
		// Real Function Value
	double real_func();
	// --------------------------------------------------
		// Fitness Rating
	double fitness_rating();
	// --------------------------------------------------
private:
	// Variables 
	int num_functions;
	vector <double> solution_set;
	vector <double> real_set;
	double x_pos, fit_rating, approx_value, real_value;

};
#endif //Individual_H
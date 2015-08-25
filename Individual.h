// Class Individual (Solution)

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

#ifndef Individual_H
#define Individual_H

class Individual{

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
	// Set Number of Functions
	void set_num_functions(int);
	// Get Number of Functions
	int get_num_functions();
	// --------------------------------------------------
	// Build Solution
	void build_solution();

private:
	// Variables 
	int num_functions;
	vector <double> solution_set;
};
#endif //Individual_H
/*
 * stopwatch.hpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */

#ifndef STOPWATCH_HPP_
#define STOPWATCH_HPP_

#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>

#include "counter.hpp"
#include "modulocounter.hpp"

class Stopwatch{

private:
	// member data
	Counter hours;
	Counter minutes;
	Counter seconds;
//	ModuloCounter minutes;
//	ModuloCounter seconds;

public:
	// constructors
	Stopwatch();
	Stopwatch(int hours_in, int minutes_in, int seconds_in);
	Stopwatch(const Stopwatch& clock);			// copy constructor

	// destructor
	~Stopwatch();

	// setters


	// getters


	// methods
	void update();								// makes sure seconds and minutes are below 60
	void tick();								// advances stopwatch by one second
	void reset();								// sets everything =0
	void print();

	// operators
	friend std::ostream& operator<<(std::ostream& out, const Stopwatch& clock);

};

#endif /* STOPWATCH_HPP_ */

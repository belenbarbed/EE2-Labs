/*
 * modulocounter.hpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */

#ifndef MODULOCOUNTER_HPP_
#define MODULOCOUNTER_HPP_

#include "counter.hpp"

class ModuloCounter{

private:
	// member data
	int modulo;
	Counter c;

public:
	//constructors
	ModuloCounter(int m = 0);

	// destructor


	// setters


	// getters
	int get_count() const;

	// methods
	bool increment();
	void reset();

	// operators


};

#endif /* MODULOCOUNTER_HPP_ */

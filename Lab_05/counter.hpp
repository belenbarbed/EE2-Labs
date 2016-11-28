/*
 * counter.hpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */

#ifndef COUNTER_HPP_
#define COUNTER_HPP_

#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>

class Counter{

private:
	// member data
	int count;

public:
	// constructors
	Counter();
	Counter(int c);

	// destructor
	~Counter();

	// setters
	void set_count(int c);

	// getters
	int get_count() const;

	// methods
	void increment();
	void reset();

	// operators
	friend std::ostream& operator<<(std::ostream& out, const Counter& c);

};


#endif /* COUNTER_HPP_ */

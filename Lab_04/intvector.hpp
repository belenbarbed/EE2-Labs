/*
 * intvector.hpp
 *
 *  Created on: 24 Nov 2016
 *      Author: bb2115
 */


#ifndef INTVECTOR_HPP_
#define INTVECTOR_HPP_

class intvector {
	
private:
	// member data
	int* address;
	int private_size;
	int private_capacity;
	
public:
	// constructors
	intvector();								// default(empty) constructor
	
	intvector(const intvector& a);				// copy constructor

	// destructor
	~intvector();
	
	// setters
	int set_size(int s);
	int set_capacity(int c);
	
	// getters
	int size();									// returns the current sixe of the vector
	int capacity();								// returns the potential capacity of the vector
	
	// methods
	void push_back(int i);						// adds a new element to the end f the vector
	int at(int i);								// returns the value of the int at index i
	
	// friend operators
	friend int operator[]();
	friend int operator[]();
	
};

#endif /* INTVECTOR_HPP_ */
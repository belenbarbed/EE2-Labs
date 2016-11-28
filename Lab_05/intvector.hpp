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
	int p_size;
	int p_capacity;
	
//	int actual[];
	
public:
	// constructors
	intvector();								// default(empty) constructor
	intvector(int size);						// makes vector of passed size and fills it with zeroes
	intvector(int n_items, int value);			// makes vector of passed size and fills it with passed value
	intvector(const intvector& a);				// copy constructor

	// destructor
	~intvector();
	
	// setters
	void set_size(int s);
	void set_capacity(int c);
	
	// getters
	int size() const;							// returns the current size of the vector
	int capacity() const;						// returns the potential capacity of the vector
	
	// methods
	void push_back(int val);					// adds a new element to the end f the vector
	int& at(int i);
	const int& at(int i) const;					// returns the value of the int at index i
	void print();								// prints out the state of the vector
	int find(int a);							// returns the first occurrence of int a and -1 if not present
	
	// operators
	int& operator[](int i);						// array subscript operator
	const int& operator[](int i)const;			// const array subscript operator
	intvector& operator=(const intvector& v);	// assignment operator
	
};

#endif /* INTVECTOR_HPP_ */

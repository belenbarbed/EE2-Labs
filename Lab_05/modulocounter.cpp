/*
 * modulocounter.cpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */

#include "modulocounter.hpp"

using namespace std;

// CONSTRUCTORS
ModuloCounter::ModuloCounter(int m): modulo(m){}

// DESTRUCTORS
ModuloCounter::~ModuloCounter(){}

// SETTERS


// GETTERS
int ModuloCounter::get_count() const{
	return c.get_count();
}

// METHODS
bool ModuloCounter::increment(){
	
	c.increment();
	if((modulo > 0) && (c.get_count() >= modulo)){
		c.reset();
		return true;
	}
	return false;

}

void ModuloCounter::reset(){
	c.reset();
}

// OPERATORS
ostream& operator<<(ostream& out, const ModuloCounter& c){
	out << c.c;
	return out;
}
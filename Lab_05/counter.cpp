/*
 * counter.cpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */

#include "counter.hpp"

using namespace std;

// CONSTRUCTORS
Counter::Counter(): count(0){}

Counter::Counter(int c){
	if(c > 0){
		count = c;
	} else {
		count = 0;
	}
}

// DESTRUCTORS
Counter::~Counter(){}

// SETTERS
void Counter::set_count(int c){
	if(c > 0){
		count = c;
	} else {
		count = 0;
	}
}

// GETTERS
int Counter::get_count() const{
	return count;
}

// METHODS
void Counter::increment(){
	count++;
}

void Counter::reset(){
	count = 0;
}

// OPERATORS
ostream& operator<<(ostream& out, const Counter& c){
	out << c.count;
	return out;
}

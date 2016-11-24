/*
 * intvector.cpp
 *
 *  Created on: 24 Nov 2016
 *      Author: bb2115
 */
 
#include "intvector.hpp"

#include <iostream>

using namespace std;

// CONSTRUCTORS
intvector::intvector(){}


// DESTRUCTOR



// SETTERS



// GETTERS



// METHODS
void intvector::push_back(int i){
	if(p_size < p_capacity){
		actual[p_size] = i;
		p_size++;
	}
}

int intvector::at(int i){
	if(i >= p_size){
		cout << "Invalid address access" << endl;
		return actual[0];
	}
	return actual[i];
}

// OPERATORS
int operator[](int i){
	if(i >= p_size){
		cout << "Invalid address access" << endl;
		return actual[0];
	}
	return actual[i];
}

const int operator[](int i)const{
	if(i >= p_size){
		cout << "Invalid address access" << endl;
		return actual[0];
	}
	return actual[i];
}
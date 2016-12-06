/*
 * circle.hpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */
 

#include "circle.hpp"

using namespace std;

// CONSTRUCTORS
Circle::Circle(Point C, double r) {
	if (r > 0){
		centre = C;
		radius = r;
	} else {
		Point tmp(0, 0);
		centre.set_x(0);
		centre.set_y(0);
		radius = 0;
		cout << "invalid circle" << endl;
	}
}

Circle::Circle(const Circle& C): centre(C.centre), radius(C.radius){}

// DESTRCUTOR
Circle::~Circle(){}

// SETTERS


// GETTERS


// METHODS
double Circle::perimeter(){
	return ( 6.28 * radius );
}

// OPERATORS

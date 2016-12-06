/*
 * triangle.hpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */
 

#include "triangle.hpp"

using namespace std;

// CONSTRUCTORS
Triangle::Triangle(Point A_in, Point B_in, Point C_in){
	if ((A_in.distance_with(B_in) + B_in.distance_with(C_in) > C_in.distance_with(A_in)) && 
		(B_in.distance_with(C_in) + C_in.distance_with(A_in) > A_in.distance_with(B_in)) && 
		(C_in.distance_with(A_in) + A_in.distance_with(B_in) > B_in.distance_with(C_in))) {
		
		A = A_in;
		B = B_in;
		C = C_in;
	} else {
		Point tmp(0, 0);
		A = tmp;
		B = tmp;
		C = tmp;
		cout << "the triangle is invalid" << endl;
	}
}

Triangle::Triangle(const Triangle& T): A(T.A), B(T.B), C(T.C) {}

// DESTRUCTOR
Triangle::~Triangle(){}

// SETTERS


// GETTERS


// METHODS
double Triangle::perimeter(){
	return (A.distance_with(B) + B.distance_with(C) + C.distance_with(A));
}

// OPRATORS

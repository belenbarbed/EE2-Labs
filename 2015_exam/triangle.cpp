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
		Shape::perimeter = triangle_perimeter(A_in, B_in, C_in);
	} else {
		Point tmp(0, 0);
		A = tmp;
		B = tmp;
		C = tmp;
		Shape::perimeter = 0;
		cout << "the triangle is invalid" << endl;
	}
}

Triangle::Triangle(const Triangle& T): A(T.A), B(T.B), C(T.C) {
	Shape::perimeter = triangle_perimeter(T.A, T.B, T.C);
}

// DESTRUCTOR
Triangle::~Triangle(){}

// SETTERS


// GETTERS


// METHODS
double Triangle::perimeter(){
	return (A.distance_with(B) + B.distance_with(C) + C.distance_with(A));
}

void text_to_triangle(vector <Triangle>& v, string filename){
	
	double ax, ay, bx, by, cx, cy;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> ax >> ay >> bx >> by >> cx >> cy){
		Point A(ax, ay);
		Point B(bx, by);
		Point C(cx, cy);
		Triangle T(A, B, C);
		v.push_back(T);
	}

	infile.close();
}

// OPRATORS

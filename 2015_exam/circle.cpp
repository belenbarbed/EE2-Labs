/*
 * circle.hpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */
 

#include "circle.hpp"

using namespace std;

// CONSTRUCTORS
Circle::Circle(Point C, double r): {
	if (r > 0){
		centre = C;
		radius = r;
		Shape::perimeter = circle_perimeter(r);
	} else {
		Point tmp(0, 0);
		centre(tmp);
		radius = 0;
		Shape::perimeter = 0;
		cout << "invalid circle" << endl;
	}
}

Circle::Circle(const Circle& C): centre(C.centre), radius(C.radius){
	Shape::perimeter = circle_perimeter(C.radius);
}

// DESTRCUTOR
Circle::~Circle(){}

// SETTERS


// GETTERS


// METHODS
double Circle::perimeter(){
	return ( 6.28 * radius );
}

void text_to_circle(vector <Circle>& v, string filename){
	
	double x, y, radius;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> x >> y >> radius){
		Point centre(x, y);
		Circle C(centre, radius);
		v.push_back(C);
	}

	infile.close();
}

// OPERATORS
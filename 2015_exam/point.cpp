/*
 * point.hpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */
 
#include <cmath>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
 
#include "point.hpp"

using namespace std;

// CONSTRUCTORS
Point::Point(double x_in, double y_in): x(x_in), y(y_in) {
	update_distance();
}

Point::Point(const Point& a): x(a.x), y(a.y), distance(a.distance){}

// DESTRCUTOR
Point::~Point(){}

// SETTERS


// GETTERS


// METHODS
void Point::update_distance(){
	distance = sqrt ( pow(abs(x), 2) + pow(abs(y), 2) );
}

double Point::distance_with(Point a){
	return sqrt( pow( (abs(a.x - x)) , 2) + pow( (abs(a.y - y)) , 2) );
}

void text_to_point(vector <Point>& v, string filename){
	
	double x, y;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> x >> y){
		Point tmp(x, y);
		v.push_back(tmp);
	}

	infile.close();
}

// OPERATORS
ostream& operator<<(ostream& out, const Point& p){
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}
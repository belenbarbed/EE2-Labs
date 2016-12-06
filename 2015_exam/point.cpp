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
Point::Point(): x(0), y(0), distance(0){}

Point::Point(double x_in, double y_in): x(x_in), y(y_in) {
	update_distance();
}

Point::Point(const Point& a): x(a.x), y(a.y), distance(a.distance){}

// DESTRCUTOR
Point::~Point(){}

// SETTERS
void Point::set_x(double x_in){
	x = x_in;
	update_distance();
}

void Point::set_y(double y_in){
	y = y_in;
	update_distance();
}

// GETTERS
double Point::get_x(){
	return x;
}

double Point::get_y(){
	return y;
}

// METHODS
void Point::update_distance(){
	distance = sqrt ( pow(abs(x), 2) + pow(abs(y), 2) );
}

double Point::distance_with(Point a){
	return sqrt( pow( (abs(a.x - x)) , 2) + pow( (abs(a.y - y)) , 2) );
}

// OPERATORS
ostream& operator<<(ostream& out, const Point& p){
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}

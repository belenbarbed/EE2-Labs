/*
 * point.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: bb2115
 */

#include "point.hpp"
#include <cmath>
using namespace std;

// CONSTRUCTORS
Point::Point(): x(0), y(0), distance(0){}

Point::Point(double x_in, double y_in): x(x_in), y(y_in){
	update_distance();
}

Point::Point(const Point& a): x(a.x), y(a.y), distance(a.distance){}

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

double Point::get_distance() const {
	return distance;
}

// METHODS
void Point::update_distance(){
	distance = sqrt ( pow(abs(x), 2) + pow(abs(y), 2) );
}

double Point::distance_with(Point a){
	return sqrt( pow( (abs(a.x - x)) , 2) + pow( (abs(a.y - y)) , 2) );
}

void Point::make_sym(){
	x = -x;
	y = -y;
}

void Point::translate(Point a){
	x = x + a.x;
	y = y + a.y;
	update_distance();
}

string Point::str(){
	stringstream ss;
	ss << "(" << x << ", " << y << ")";
	return ss.str();
}

// FRIENDS
bool operator<(const Point& p1, const Point& p2){
	return (p1.get_distance() < p2.get_distance());
}

bool operator==(const Point& p1, const Point& p2){
	return ((p1.x == p2.x) && (p1.y == p2.y));
}
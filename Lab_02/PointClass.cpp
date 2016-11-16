/*
 * PointClass.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: bb2115
 */

#include "PointClass.hpp"
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
	distance = sqrt ( pow(x, 2) + pow(y, 2) );
}

double Point::distance_with(Point a){
	return sqrt( pow( (a.x - x) , 2) + pow( (a.y - y) , 2) );
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

// OPERATORS
//bool operator==(const Point& p2){
//	return ((this.x == p2.x) && (this.y == p2.y));
//}

// FRIENDS
bool operator<(const Point& p1, const Point& p2){
	return (p1.distance < p2.distance);
}

/*
 * PointClass.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: bb2115
 */

#include "PointClass.hpp"
using namespace std;

Point::Point(): x(0), y(0), distance(0){}

Point::Point(double x_in, double y_in): x(x_in), y(y_in){
	update_distance();
}

Point::Point(const Point& a): x(a.x), y(a.y), distance(a.distance){}

void Point::set_x(double x_in){
	x = x_in;
	update_distance();
}

void Point::set_y(double y_in){
	y = y_in;
	update_distance();
}

double Point::get_x(){
	return x;
}

double Point::get_y(){
	return y;
}

double Point::get_distance(){
	return distance;
}

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

/*
 * point.hpp
 *
 *  Created on: 12 Oct 2016
 *      Author: bb2115
 */

#ifndef POINT_HPP_
#define POINT_HPP_

#include <stdio.h>
#include <math.h>
#include <string>
#include <sstream>


class Point {

private:
	//attributes
	double x;
	double y;
	double distance;

public:
	// constructors
	Point();							// default constructor where x = y = 0
	Point(double x_in, double y_in);	// constructor with initial x and y values
	Point(const Point& a);				// copy constructor
	
	//setters
	void set_x(double x_in);			// set x coordinates
	void set_y(double y_in);			// set y coordinates

	// getters
	double get_x();						// returns the x coordinate
	double get_y();						// returns the y coordinate
	double get_distance() const;		// returns the distance to the origin
	
	// methods
	void update_distance();				// re-calculates the distance according to the current coordinates
	double distance_with(Point a);		// returns the distance to a point passed in arguments
	void make_sym();					// transforms the point to its symmetric to the origin (reverse sign)
	void translate(Point a);			// translates the point with respect to one passed as argument
	std::string str();					// returns string representation of point coordinates as (x, y)

	// friend functions
	friend bool operator<(const Point& p1, const Point& p2);
	friend bool operator==(const Point& p1, const Point& p2);

};


#endif /* POINT_HPP_ */

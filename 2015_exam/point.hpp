/*
 * point.hpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */

#ifndef POINT_HPP_
#define POINT_HPP_

class Point {
	
private:
	double x;
	double y;
	double distance;
	
public:
	// constructors
	Point();
	Point(double x_in, double y_in);
	Point(const Point& a);
	
	// destructor
	~Point();
	
	// getters
	double get_x();
	double get_y();
	
	// setters
	void set_x(double x_in);
	void set_y(double y_in);
	
	// methods
	void update_distance();
	double distance_with(Point a);
	
	// operators
	friend std::ostream& operator<<(std::ostream& out, const Point& p);
	
};

#endif /* POINT_HPP_ */

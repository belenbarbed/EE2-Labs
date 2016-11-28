/*
 * ellipse.hpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */
 
#ifndef ELLIPSE_HPP_
#define ELLIPSE_HPP_
 
class Ellipse{
	
private:
	double x_axis;
	double y_axis;

public:
	// constuctor
	Ellipse(double xa_in, double ya_in): x_axis(xa_in), y_axis(ya_in){}
	
	// setters
	void set_axes(double xa_in, double ya_in){
		x_axis = xa_in;
		y_axis = ya_in;
	}
	
};
 
class Circle : public Ellipse{

private:
	

public:
	// constructor
	Circle(double radius): Ellipse(2*radius, 2*radius){}
	
	// setters
	void set_radius(double radius){
		Ellipse::set_axes(2*radius, 2*radius);
	}
	
};

#endif /* ELLIPSE_HPP_ */
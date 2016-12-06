/*
 * circle.hpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */

#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include <cmath>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
 
#include "shape.hpp"
#include "point.hpp"

class Circle : public Shape {
	
private:
	Point centre;
	double radius;
	
public:
	// constuctors
	Circle(Point C, double r);
	Circle(const Circle& C);
	
	// destructor
	~Circle();
	
	// getters
	
	
	// setters
	
	
	// methods
	double perimeter();
	
	// operators
	friend std::ostream& operator<<(std::ostream& out, const Circle& c);
	
};

#endif /* CIRCLE_HPP_ */
/*
 * triangle.hpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

#include <cmath>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
 
#include "shape.hpp"
#include "point.hpp"

class Triangle : public Shape {
	
private:
	Point A;
	Point B;
	Point C;
	
public:
	// constuctors
	Triangle(Point A_in, Point B_in, Point C_in);
	Triangle(const Triangle& T);
	
	// destructor
	~Triangle();
	
	// getters
	
	
	// setters
	
	
	// methods
	double perimeter();
	
	// operators
	
	
};

#endif /* TRIANGLE_HPP_ */
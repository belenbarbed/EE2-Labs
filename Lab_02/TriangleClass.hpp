/*
 * TriangleClass.hpp
 *
 *  Created on: 2 Nov 2016
 *      Author: bb2115
 */

#ifndef TRIANGLECLASS_HPP_
#define TRIANGLECLASS_HPP_

#include "PointClass.hpp"


class Triangle {

private:
	Point A;
	Point B;
	Point C;
	double perimeter_val;

public:
	// constructors
	Triangle();
	Triangle(const Point& A_in, const Point& B_in, const Point& C_in);
	Triangle(const Triangle& T);

	//methods
	double perimeter();							// returns perimeter value
	void update_perimeter();					// generates perimeter according to current point values

	void translate(Point p);					// translates triangle by vector (all points)

};



#endif /* TRIANGLECLASS_HPP_ */

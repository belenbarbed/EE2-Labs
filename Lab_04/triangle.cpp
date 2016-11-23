/*
 * triangle.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: bb2115
 */

#include "triangle.hpp"


Triangle::Triangle(): A(), B(), C(), perimeter_val(0){}

Triangle::Triangle(const Point& A_in, const Point& B_in, const Point& C_in): A(A_in), B(B_in), C(C_in) {
	update_perimeter();
}

Triangle::Triangle(const Triangle& T): A(T.A), B(T.B), C(T.C), perimeter_val(T.perimeter_val){}


void Triangle::update_perimeter(){
	perimeter_val = A.distance_with(B) + B.distance_with(C) + C.distance_with(A);
}

double Triangle::perimeter(){
	return perimeter_val;
}

void Triangle::translate(Point p){

	A.translate(p);
	B.translate(p);
	C.translate(p);

	update_perimeter();

}

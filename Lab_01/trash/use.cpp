/*
 * use.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: bb2115
 */

#include <iostream>
#include "otherthing.hpp"

using namespace std;

int main() {

	double a, b, c, d;
	cin >> a >> b;
	Point p(a, b);

	c = p.get_distance();

	Point q (1, 1);
	d = p.distance_with(q);

	cout << "The point you entered was " << p.str() << endl;
	cout << "The distance to the origin is " << c << " units" << endl;

	cout << "The distance to the point " << q.str() << " is " << d << " units" << endl;

	p.make_sym();
	cout << "The symmetric to the point is " << p.str() << endl;

	return 0;
}
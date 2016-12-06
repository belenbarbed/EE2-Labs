/*
 * main.cpp
 *
 *  Created on: 05 Dec 2016
 *      Author: bb2115
 */

#include <cmath>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

#include "shape.hpp"
#include "point.hpp"
#include "triangle.hpp"
#include "circle.hpp"

using namespace std;

void text_to_point(vector <Point>& v, string filename);
void text_to_triangle(vector <Triangle>& v, string filename);
void text_to_circle(vector <Circle>& v, string filename);

int main() {
	
	cout << "this is working" << endl;
	
	return 0;
}
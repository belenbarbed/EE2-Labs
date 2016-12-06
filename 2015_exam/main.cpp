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

void text_to_point(vector <Point>& v, string filename){

	double x, y;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> x >> y){
		Point tmp(x, y);
		v.push_back(tmp);
	}

	infile.close();
}

void text_to_triangle(vector <Triangle>& v, string filename){

	double ax, ay, bx, by, cx, cy;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> ax >> ay >> bx >> by >> cx >> cy){
		Point A(ax, ay);
		Point B(bx, by);
		Point C(cx, cy);
		Triangle T(A, B, C);
		v.push_back(T);
	}

	infile.close();
}

void text_to_circle(vector <Circle>& v, string filename){

	double x, y, radius;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> x >> y >> radius){
		Point centre(x, y);
		Circle C(centre, radius);
		v.push_back(C);
	}

	infile.close();
}


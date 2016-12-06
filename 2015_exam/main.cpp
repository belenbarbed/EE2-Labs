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

template<class Type>
void print_vector(vector <Type>& v);

void text_to_point(vector <Point>& v, string filename);
void text_to_triangle(vector <Triangle>& v, string filename);
void text_to_circle(vector <Circle>& v, string filename);


int main() {
	
	vector<Triangle> T;
	vector<Circle> C;
	vector<double> T_p, C_p;
	
	text_to_triangle(T, "info_triangle.txt");
	text_to_circle(C, "info_circle.txt");
	
	for(int i = 0; i < T.size(); i++){
		double tmp = T[i].perimeter();
		T_p.push_back(tmp);
	}
	for(int i = 0; i < C.size(); i++){
		double tmp = C[i].perimeter();
		C_p.push_back(tmp);
	}
	
	cout << endl;
	
	print_vector(T);
	cout << "the perimeters of these triangles are " << endl;
	print_vector(T_p);
	
	cout << endl;
	
	print_vector(C);
	cout << "the circumferences of these circles are " << endl;
	print_vector(C_p);
	
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


template<class Type>
void print_vector(vector <Type>& v){
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	
}


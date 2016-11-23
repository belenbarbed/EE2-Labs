/*
 * Lab_03.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: bb2115
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

#include "point.hpp"

using namespace std;

void testClass();

void file_to_vector(vector <Point>& v, string filename);
void print_vector(vector <Point>& v);

int farthest_point(vector <Point>& a);
int closest_point(vector <Point>& a);

int member_point(const Point& p, vector <Point>& v, bool order = 0);
int member_point_unordsearch(const Point& p, vector <Point>& v);
int member_point_binsearch(const Point& p, vector <Point>& v);

void pointdup(vector <Point>& v1, vector <Point>& v2, vector <Point>& v_out, bool order = 0);

int main() {
	
	string file1, file2;
	cout << "Write the name of the first file:" << endl;
	getline(cin, file1);
	file1 += ".txt";
	cout << "Write the name of the second file:" << endl;
	getline(cin, file2);
	file2 += ".txt";
	
	vector <Point> v1, v2, v3;
	
	file_to_vector(v1, file1);
	file_to_vector(v2, file2);
	
	pointdup(v1, v2, v3);
	
	cout << "The points in common are:" << endl;
	print_vector(v3);
	
	return 0;
}

void testClass(){

	double a, b, c, d;
	cout << "Enter a point to do the test on" << endl;
	cin >> a >> b;
	Point p(a, b);

	c = p.get_distance();

	Point q (1, 1);
	d = p.distance_with(q);

	cout << "The point you entered was " << p << endl;
	cout << "The distance to the origin is " << c << " units" << endl;

	cout << "The distance to the point " << q << " is " << d << " units" << endl;

	p.make_sym();
	cout << "The symmetric to the point is " << p << endl;

}

void file_to_vector(vector <Point>& v, string filename){
	
	double x, y;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file." << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> x >> y){
		Point tmp(x, y);
		v.push_back(tmp);
	}

	infile.close();
}

void print_vector(vector <Point>& v){

	for(int i = 0; i < v.size(); i++){
		
		cout << v[i] << endl;
		
	}
	
}

int member_point(const Point& p, vector <Point>& v, bool order){
	
	if(order){
		return member_point_binsearch(p, v);
	} else {
		return member_point_unordsearch(p, v);
	}
	
}

int member_point_unordsearch(const Point& p, vector <Point>& v){
	
	for(int i = 0; i < v.size(); i++){
		if(v[i] == p){
			return i;
		}
	}
	
	return v.size();
	
}

int member_point_binsearch(const Point& p, vector <Point>& v){
	
	int look = v.size() / 2;
	
	if((v.size() < 2) && !(p == v[0])){
		return v.size();
	}	
	
	if(p == v[look]){
		return look;
	}
	
	if(p < v[look]){
		vector <Point> sub(&v[0], &v[look]);
		// vector <Point> u(v.begin(), v.begin() + look);
		member_point_binsearch(p, v);
	}
	
	if(p > v[look]){
		vector <Point> sub(&v[look + 1], &v[v.size() - 1]);
		// vector <Point> u(v.begin() + look, v.end());
		member_point_binsearch(p, v);
	}
	
}

void pointdup(vector <Point>& v1, vector <Point>& v2, vector <Point>& v_out, bool order){
	
	v_out = v1;
	
}
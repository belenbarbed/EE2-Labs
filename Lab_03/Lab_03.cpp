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

#include "point.hpp"

using namespace std;

void testClass();

int farthest_point(vector <Point>& a);
int closest_point(vector <Point>& a);

int member_point_unordsearch(const Point& p, vector <Point>& v);

int main() {

	testClass();

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

int farthest_point(vector <Point>& a){

	if((a.size() == 0) || (a.size() == 1)){
		return 0;
	}


	double max = 0;
	int max_index = 0;

	for(int i = 0; i < a.size(); i++){
		if(a[i].get_distance() > max){
			max_index = i;
			max = a[i].get_distance();
		}
	}

	return max_index;

}

int closest_point(vector <Point>& a){

	if((a.size() < 2)){
		return 0;
	}

	int min_index = 0;

	for(int i = 0; i < a.size(); i++){
		if( (a[i]) < (a[min_index]) ){
			min_index = i;
		} 
	}

	return min_index;
}

int member_point_unordsearch(const Point& p, vector <Point>& v){
	
	for(int i = 0; i < v.size(); i++){
		if(v[i] == p){
			return i;
		}
	}
	
	return v.size();
	
}
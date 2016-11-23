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
void points_and_lines();

void do_farthest_point();
int  farthest_point(vector <Point>& a);

void do_closest_point();
int  closest_point(vector <Point>& a);

void do_equal_to();

int main() {

	do_closest_point();

	return 0;
}

void testClass(){

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

}

void points_and_lines(){

	vector <double> line;
	Point p();
	double b;

	do{
		cout << "Enter the value b in the line equation 'y = b' (and a 0 when finished):" << endl;
		cin >> b;
		line.push_back(b);
	} while (b != 0);

	line.pop_back();



}

void do_farthest_point(){

	vector <Point> a;
	double x, y;

	do{
		cout << "Enter another point (and (0, 0) when finished):" << endl;
		cin >> x >> y;
		Point p(x, y);
		a.push_back(p);
	} while (!( x == 0 && y == 0));

	a.pop_back();

	int max_index = farthest_point(a);
	cout << "The index of the farthest point from the origin is: " << max_index << endl;
	cout << "This point is: " << a[max_index].str() << endl;

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

void do_closest_point(){

	vector <Point> a;
	double x, y;

	ifstream infile;
	infile.open("inputpoints.txt");
	if(!infile.is_open()){
		cout << "Could not open input file." << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> x >> y){
		Point tmp(x, y);
		a.push_back(tmp);
	}

	infile.close();

	int min_index = closest_point(a);
	cout << "The index of the closest point from the origin is: " << min_index << endl;
	cout << "This point is: " << a[min_index].str() << endl;

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

void do_equal_to(){
	
	double ax, ay, bx, by;
	
	cout << "Enter the first point" << endl;
	cin >> ax >> ay;
	cout << "Enter the second point" << endl;
	cin >> bx >> by;
	
	Point a(ax, ay);
	Point b(bx, by);
	
	if(a==b){
		cout << "These points are the same" << endl;
	} else {
		cout << "These points aren't the same" << endl;
	}
	
}





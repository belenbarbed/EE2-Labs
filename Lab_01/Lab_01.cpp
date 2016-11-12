/*
 * Labs_01.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: bb2115
 */

#include <iostream>
#include <vector>

#include "PointClass.hpp"

using namespace std;

void testClass();
void points_and_lines();
int farthest_point(vector <Point>& a);

int main() {

	vector <Point> a;
	double x, y;

	do{
		cout << "Enter another point (and (0, 0) when finished):" << endl;
		cin >> x >> y;
		Point p(x, y);
		a.push_back(p);
	} while (x != 0 && y != 0);

	a.pop_back();

	int max_index = farthest_point(a);
	cout << "The index of the farthest point from the origin is: " << max_index << endl;
	cout << "This point is: " << a[max_index].str() << endl;

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

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
	
	bool order = 0;
	cout << "Please enter 1 if the second vector is ordered and 0 if it isn't" << endl;
	cin >> order;
	
	vector <Point> v1, v2, v3;
	
	file_to_vector(v1, file1);
	file_to_vector(v2, file2);
	
	pointdup(v1, v2, v3, order);
	
	if(v3.size()){
		cout << "The points in common are:" << endl;
		print_vector(v3);
	} else {
		cout << "No points in common were found" << endl;
	}
	
	return 0;
}

void file_to_vector(vector <Point>& v, string filename){
	
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
	
	for(int i = 0; i < v1.size(); i++){
		for(int j = 0; j < v2.size(); j++){
			
			if((v1[i] == v2[j]) && (member_point(v1[i], v_out, order) == v_out.size())){
				v_out.push_back(v1[i]);
			}
			
		}
	}
	
}
/*
 * Lab_04.cpp
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

void file_to_vector(vector <Point>& v, string filename);
void print_vector(vector <Point>& v);
 
int main(){
	 
	 {
		Point p(1, 1);
	 }
	
	cout << "End of inner scope" << endl;
	
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


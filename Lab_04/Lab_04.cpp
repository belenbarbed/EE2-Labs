/*
 * Lab_04.cpp
 *
 *  Created on: 24 Nov 2016
 *      Author: bb2115
 */
 
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

#include "point.hpp"
#include "intvector.hpp"

using namespace std;

void test_class();

void file_to_vector(vector <Point>& v, string filename);
void print_vector(vector <Point>& v);

void file_to_vector(vector <Point*>& v, string filename);
void print_vector(vector <Point*>& v);
 
int main(){

	string filename = "inputpoints.txt";
	vector <Point*> v_in;
	file_to_vector(v_in, filename);
	
	print_vector(v_in);
	
	return 0;
}

void test_class(){
	
	
	
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

void file_to_vector(vector <Point*>& v, string filename){
	
	double x, y;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> x >> y){
		
		Point* tmp = new Point(x, y);
		v.push_back(tmp);
		
	}

	infile.close();
}

void print_vector(vector <Point>& v){

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	
}

void print_vector(vector <Point*>& v){

	for(int i = 0; i < v.size(); i++){
		cout << *(v[i]) << endl;
	}
	
}


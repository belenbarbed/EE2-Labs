/*
 * Lab_05.cpp
 *
 *  Created on: 28 Nov 2016
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
#include "stopwatch.hpp"
#include "counter.hpp"
#include "modulocounter.hpp"

using namespace std;

void test_class();

void test_vector_input();
void file_to_vector(vector <Point>& v, string filename);
void print_vector(vector <Point>& v);
void file_to_vector(vector <Point*>& v, string filename);
void print_vector(vector <Point*>& v);

void test_class_intvector();
void print_first(const intvector& v);
void print_external(const intvector& v);
 
int main(){

	test_class();
	
	return 0;
}

void test_class(){

	Stopwatch clock1;
	cout << clock1 << endl;

	Stopwatch clock2(1, 30, 45);
	cout << clock1 << endl;

	Stopwatch clock3(0, 0, 120);
	cout << clock1 << endl;

	Stopwatch clock4(clock3);
	cout << clock1 << endl;

	return;

}

void test_class_intvector(){
	
	intvector tmp1(10, 0);
	tmp1.print();

	intvector tmp2(tmp1);
	tmp2.print();

	intvector tmp3;
	tmp3.set_capacity(5);
	tmp3.push_back(1);
	tmp3.push_back(2);
	tmp3.push_back(3);
	tmp3.push_back(4);
	tmp3.push_back(5);
	tmp3.print();

	print_first(tmp3);
	cout << endl;

	intvector tmp4 = tmp3;
	print_external(tmp4);

	int a = 4;
	cout << "the int " << a << " is in vector tmp4 at index " << tmp4.find(a) << endl;

	return;
	
}

void test_vector_input(){

	string filename = "inputpoints.txt";
	vector <Point*> v_in;
	file_to_vector(v_in, filename);

	print_vector(v_in);

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

	for(uint i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	
}

void print_vector(vector <Point*>& v){

	for(uint i = 0; i < v.size(); i++){
		cout << *(v[i]) << endl;
	}
	
}

void print_first(const intvector& v){
	cout << v[0] << endl;
}

void print_external(const intvector& v){

	for(int i = 0; i < v.size(); i++){
// 		this is to test the operator[]
		cout << v[i] << endl;

//		this is to test the member function .at(int i)
//		cout << v.at(i) << endl;
	}

}


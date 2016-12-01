/*
 * Lab_07.cpp
 *
 *  Created on: 29 Nov 2016
 *      Author: bb2115
 */

#include "people.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

void file_to_vector(vector <CollegeMember>& v, string filename);

int main(){
	
	vector<CollegeMember> v;
	string filename = "inputpeople.txt";
	
	file_to_vector(v, filename);
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	
	return 0;
}

void file_to_vector(vector <CollegeMember>& v, string filename){
	
	string name, surname;

	ifstream infile;
	infile.open( filename.c_str() );
	if(!infile.is_open()){
		cout << "Could not open input file with name " << filename << endl;
		exit(EXIT_FAILURE);
	}

	while(infile >> name >> surname){
		CollegeMember tmp(name, surname);
		//CollegeMember* tmp = new CollegeMember(name, surname);
		v.push_back(tmp);
	}

	infile.close();
}
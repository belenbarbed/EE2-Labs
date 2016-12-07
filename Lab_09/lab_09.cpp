/*
 * Lab_09.cpp
 *
 *  Created on: 06 Dec 2016
 *      Author: bb2115
 */
 
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;

double my_sqrt(double n);

int main(){
	
	vector<int> v(3);
	int i;
	double num, result;
	cin >> i;
	cin >> num;
	
	try {
		result = my_sqrt(num);
		v.at(i) = result;
		cout << v.at(i) << endl;
	}
	catch(const out_of_range& e) {
		cout << "index not suitable: " << e.what() << endl;
	}
	catch(const string& e) {
		cout << "unsuccessful sqrtcomputation: " << e << endl;
	}
	
	cout << "something else" << endl;
	return 0;
	
}

double my_sqrt(double n) {
	
	double result;
	
	if(n < 0){
		throw "cannot compute square root of negative number";
	}
	result = sqrt(n);
	if(isnan(result)){
		throw "cannot compute square root";
	}
	return result;
}


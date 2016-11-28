/*
 * intvector.cpp
 *
 *  Created on: 24 Nov 2016
 *      Author: bb2115
 */
 
#include "intvector.hpp"

#include <iostream>

using namespace std;

// CONSTRUCTORS
intvector::intvector(): p_size(0), p_capacity(1){
	address = new int[1];
}

intvector::intvector(int size): p_size(size), p_capacity(size){

	address = new int[size];

	for(int i = 0; i < size; i++){
		address[i] = 0;
	}

}

intvector::intvector(int n_items, int value): p_size(n_items), p_capacity(n_items) {

	address = new int[n_items];

	for(int i = 0; i < n_items; i++){
		address[i] = value;
	}

}

intvector::intvector(const intvector& a): p_size(a.p_size), p_capacity(a.p_capacity){

	address = new int[a.p_capacity];

	for(int i = 0; i < a.p_size; i++){
		address[i] = a[i];
	}

}

// DESTRUCTOR
intvector::~intvector(){
	delete[] address;
}

// SETTERS
void intvector::set_size(int s){
	p_size = s;
}

void intvector::set_capacity(int c){
	p_capacity = c;
}

// GETTERS
int intvector::size() const{
	return p_size;
}

int intvector::capacity() const{
	return p_capacity;
}

// METHODS
void intvector::push_back(int val){

	if(p_size == p_capacity){
		p_capacity = 2*p_capacity;
		int* tmp = new int[p_capacity];
		for(int i = 0; i < p_size; i++){
			tmp[i] = address[i];
		}
		delete[] address;
		address = tmp;
	}
	address[p_size] = val;
	p_size++;

}

int& intvector::at(int i){

	if(i < p_size){
		return address[i];
	} else {
		cout << "Invalid address access" << endl;
		return address[0];
	}

}

const int& intvector::at(int i) const{

	if(i < p_size){
		return address[i];
	} else {
		cout << "Invalid address access" << endl;
		return address[0];
	}

}

void intvector::print(){

	cout << "The vector capacity is: " << p_capacity << endl;
	cout << "The vector size is: " << p_size << endl;

	cout << "The address of the array is: " << address << endl;

	cout << "The values inside the vector are:" << endl;
	for(int i = 0; i < p_size; i++){
		cout << "   at index " << i << ": " << address[i] << endl;
	}

	cout << endl;

}

int intvector::find(int a){

	for(int i = 0; i < p_size; i++){
		if(this->address[i] == a){
			return i;
		}
	}

	return -1;

}

// OPERATORS
int& intvector::operator[](int i){

	if(i < p_size){
			return address[i];
	} else {
		cout << "Invalid address access" << endl;
		return address[0];
	}

}

const int& intvector::operator[](int i)const{

	if(i < p_size){
		return address[i];
	} else {
		cout << "Invalid address access" << endl;
		return address[0];
	}

}

intvector& intvector::operator=(const intvector& v){

	if(&v != this){
		delete[] address;
		address = new int[v.p_size];

		for(int i = 0; i < v.p_size; i++){
			address[i] = v[i];
		}

		p_size = v.p_size;
		p_capacity = v.p_capacity;
	}
	return *this;
}


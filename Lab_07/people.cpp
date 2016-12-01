/*
 * people.cpp
 *
 *  Created on: 01 Dec 2016
 *      Author: bb2115
 */

#include "people.hpp"
#include <iostream>
#include <string>

using namespace std;

//------------------------------------------
// PERSON

// CONSTRUCTORS
Person::Person(): p_name(0), p_surname(0), p_age(0){}

Person::Person(std::string name_in, std::string surname_in): p_name(name_in), p_surname(surname_in), p_age(0){}

// DESTRUCTOR
Person::~Person(){
}

// GETTERS
string Person::name(){
	return p_name;
}

// SETTERS


// METHODS


// OPERATORS
ostream& operator<<(ostream& out, const Person& p){
	out << p.p_name << " " << p.p_surname;
	return out;
}


//------------------------------------------
// COLLEGE MEMBER

// CONSTRUCTORS


// DESTRUCTOR


// GETTERS


// SETTERS


// METHODS


// OPERATORS
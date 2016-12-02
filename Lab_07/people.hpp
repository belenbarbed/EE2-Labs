/*
 * people.hpp
 *
 *  Created on: 01 Dec 2016
 *      Author: bb2115
 */
 
#include <iostream>
#include <string>
 
#ifndef PEOPLE_HPP_
#define PEOPLE_HPP_

class Person {
	
protected:
	std::string p_name;
	std::string p_surname;
	int p_age;
	
public:
	// constructors
	Person();
	Person(std::string name_in, std::string surname_in);
	
	// destructor
	~Person();

	// getters
	std::string name();
	
	// setters
	
	
	// methods
	
	
	// operators
	friend std::ostream& operator<<(std::ostream& out, const Person& p);
	
};

class CollegeMember: public Person {

public:
	// constructors
	// CollegeMember();
	// CollegeMember(std::string name_in, std::string surname_in);
	
	// destructor
	~CollegeMember();

	// getters
	
	
	// setters
	
	
	// methods
	
	
	// operators
	friend std::ostream& operator<<(std::ostream& out, const CollegeMember& p);
	
};

class CollegeVisitor: Person {
	
};

class Student: CollegeMember {
	
};

class Employee: CollegeMember {
	
};


#endif /* PEOPLE_HPP_ */
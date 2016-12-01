/*
 * people.hpp
 *
 *  Created on: 01 Dec 2016
 *      Author: bb2115
 */
 
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
	
	// methods
	
};

class CollegeMember : public Person {
	
};

class CollegeVisitor : public Person {
	
};

class Student : public CollegeMember {
	
};

class Employee : public CollegeMember {
	
};


#endif /* PEOPLE_HPP_ */
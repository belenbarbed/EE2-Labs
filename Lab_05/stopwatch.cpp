/*
 * stopwatch.cpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */

#include <iostream>
#include "stopwatch.hpp"

using namespace std;

// CONSTRUCTORS
Stopwatch::Stopwatch(): hours(0), minutes(0), seconds(0){}

Stopwatch::Stopwatch(int hours_in, int minutes_in, int seconds_in): hours(hours_in), minutes(minutes_in), seconds(seconds_in){
	this->update();
}

Stopwatch::Stopwatch(const Stopwatch& clock): hours(clock.hours), minutes(clock.minutes), seconds(clock.seconds){
	this->update();
}

// DESTRUCTORS
Stopwatch::~Stopwatch(){}

// SETTERS


// GETTERS


// METHODS
void Stopwatch::update(){

	while(seconds.get_count() > 59){
		minutes.increment();
		seconds.set_count(seconds.get_count() - 60);
	}

	while(minutes.get_count() > 59){
		hours.increment();
		minutes.set_count(minutes.get_count() - 60);
	}

}

void Stopwatch::tick(){

	seconds.increment();
	this->update();

}

void Stopwatch::reset(){

	seconds.reset();
	minutes.reset();
	hours.reset();

}

void Stopwatch::print(){

	cout << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

}

// OPERATORS
ostream& operator<<(ostream& out, const Stopwatch& clock){
	out << clock.hours << " hours, " << clock.minutes << " minutes, and " << clock.seconds << " seconds.";
	return out;
}

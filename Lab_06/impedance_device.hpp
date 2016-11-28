/*
 * impedance_device.hpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */
 
#include <complex> 
 
#ifndef IMPEDANCE_DEVICE_HPP_
#define IMPEDANCE_DEVICE_HPP_

class Impedance_Device{
	
public:

	// destructor
	virtual ~Impedance_Device() {}

	// methods
	virtual std::complex<double> get_impedance(double omega) = 0;
	
};

class Resistor : public Impedance_Device{
	
private:
	double resistance;
	
public:
	// constructor
	Resistor(double r): resistance(r){}
	
	// getters
	std::complex <double> get_impedance(double omega){
		std::complex<double> impedance(resistance);
		return impedance;
	}
	
};

class Capacitor : public Impedance_Device{
	
private:
	double capacitance;
	
public:
	// constructor
	Capacitor(double c): capacitance(c){}
	
	// getters
	std::complex<double> get_impedance(double omega){
		std::complex<double> impedance(0, -1/(omega * capacitance));
		return impedance;
	}
	
};

class Inductor : public Impedance_Device{
	
private:
	double inductance;
	
public:
	// constructor
	Inductor(double i): inductance(i){}
	
	// getters
	std::complex<double> get_impedance(double omega){
		std::complex<double> impedance(0, omega * inductance);
		return impedance;
	}
	
};

#endif /* IMPEDANCE_DEVICE_HPP_ */
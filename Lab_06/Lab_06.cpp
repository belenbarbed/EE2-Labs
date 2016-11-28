/*
 * Lab_06.cpp
 *
 *  Created on: 28 Nov 2016
 *      Author: bb2115
 */

#include <iostream>
#include <vector>
#include <complex> 
 
#include "impedance_device.hpp"
#include "ellipse.hpp"

using namespace std;

void test_impedances();
void test_ellipses();

int main(){
	
	test_ellipses();
	
	return 0;
}

void test_impedances(){
	
	vector<Impedance_Device*> circuit;
	
	Impedance_Device *tmp_id;
	
	char dc;
	double tmp_rci;
	int n_devices;
	
	cout << "number of devices: ";
	cin >> n_devices;
	
	for(int i = 0; i < n_devices; i++){
		
		cout << "chose the device (r/c/i): ";
		cin >> dc;
		
		if(dc == 'c'){
			cout << "capacitance (F): ";
			cin >> tmp_rci;
			tmp_id = new Capacitor(tmp_rci);
		}
		
		else if(dc == 'i'){
			cout << "impendance (H): ";
			cin >> tmp_rci;
			tmp_id = new Inductor(tmp_rci);
		}
		
		else{
			cout << "resistance (Ohm): ";
			cin >> tmp_rci;
			tmp_id = new Resistor(tmp_rci);
		}
		circuit.push_back(tmp_id);
		
	}
	
	double f;
	cout << "frequency: ";
	cin >> f;
	
	for(int i = 0; i < n_devices; i++){
		
		cout << "impedance " << (i+1) << ": ";
		cout << circuit[i]->get_impedance(f * 6.28) << " Ohms" << endl;
		
	}
	
	for(int i = 0; i < n_devices; i++){
		delete circuit[i];
	}
	
	return;
}

void test_ellipses(){
	
	Circle c(10);
	c.set_axes(15, 20);
	
	vector<Ellipse*> e;
	
	for(int i = 0; i < e.size(); i++){
		double new_x, new_y;
		cout << "x: ";
		cin >> new_x;
		cout << "y: ";
		cin >> new_y;
		
		e[i]->set_axes(new_x, new_y);
	}
	
	return;
}
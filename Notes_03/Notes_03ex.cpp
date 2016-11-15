//============================================================================
// Name        : Notes_03ex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "point.hpp"

using namespace std;

//int main() {
//
//	int* a;
//	*a = 10;
//	cout << a << endl;
//	return 0;
//
//}

//int main() {
//
//	int* a;
//	*a = 10;
//	cout << *a << endl;
//	return 0;
//
//}

//int main() {
//
//	int* a;
//	int v_a;
//	a = &v_a;
//
//	*a = 10;
//	cout << *a << endl;
//
//	a = new int;
//	*a = 15;
//	cout << *a << endl;
//
//	return 0;
//
//}

//int main() {
//
//	Point* p1 = new Point();
//	Point* p2 = new Point(1, 2);
//
//	cout << p1->get_x() << " " << p1->get_y() << endl;
//	cout << p2->get_x() << " " << p2->get_y() << endl;
//
//	return 0;
//
//}

//int* square(int n){
//
//	int square_n = n*n;
//	return &square_n;
//
//}
//
//int main(){
//
//	int n = 10;
//	cout << *square(n) << endl;
//	return 0;
//
//}

//int* square(int n){
//
//	int* square_n = new int;
//	*square_n = n*n;
//	return square_n;
//
//}
//
//int main(){
//
//	int n;
//	int *sq;
//
//	while(1){
//		cin >> n;
//		sq = square(n);
//		cout << *sq << endl;
//		delete sq;
//	}
//	return 0;
//
//}

int main(){

	{
		cout << "A new scope begins" << endl;
		Point p1;
		Point* p2 = new Point(1, 2);

		delete p2;
		cout << "The new scope ends" << endl;
	}

	cout << "Goodbye everyone!" << endl;

	return 0;

}



/*
 * main.cpp
 *
 *  Created on: 7 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "functions.hpp"

using namespace std;

int main() {
	double array [10] = {
			0,0,0,0,0,0,0,0,0,0
	};

	for (int i = 0; i<10; i++) {
		array [i] = (double)rand()/RAND_MAX * 10;
	}
	cout << findMax(array, 10) << endl;
}





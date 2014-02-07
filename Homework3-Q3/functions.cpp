/*
 * functions.cpp
 *
 *  Created on: 7 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include "functions.hpp"
#include <iostream>

using namespace std;

double ABC::findMax( double array [], int n) {

	double max = 0;

	for (int i=0; i<n; i++) {

		if (array[i]>max) {
			max = array[i];
		}
	}

	return max;
}


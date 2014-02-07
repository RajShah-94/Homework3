/*
 * main.cpp
 *
 *  Created on: 7 Feb 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float rnd(float a, float b) {
	float x;
	x = a + (b - a) * (double)rand()/RAND_MAX;
	return x;
}

int main () {

	float a = 0;
	float b = 10;
	cout << rnd(a,b) << endl;
	cout << rnd(a,b) << endl;
	cout << rnd(a,b) << endl;
	cout << rnd(a,b) << endl;
	cout << rnd(a,b) << endl;
}

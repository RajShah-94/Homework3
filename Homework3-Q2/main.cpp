/*
 * main.cpp
 *
 *  Created on: 7 Feb 2014
 *      Author: rajru_000
 */

#include <iostream> //no "?"

bool isEven(int i) {
		if( i % 2 == 0) { //used assignment operator instead of ==
			return true; //should be true instead of false [logic error]
		} else {
			return false;
		}
	} //function was not declared before use

int main() { //must be int not double
	for(int i=1;i<=10;++i) { //i should be declared
		std::cout << i << " ";
		if(isEven(i)) { std::cout << "even";
		} else {
			std::cout << "odd";
		}
		std::cout << std::endl;
	}


}




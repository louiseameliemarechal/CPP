#include <iostream>
#include "Sample1.hpp"

Sample1::Sample1( char p1, int p2, float p3 ) {

	this->a1 = p1;
	this->a2 = p2;
	this->a3 = p3;

	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "p1 = " << p1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "p2 = " << p2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
	std::cout << "p3 = " << p3 << std::endl;
	return;
}

Sample1::~Sample1( void ) {

	return;
}

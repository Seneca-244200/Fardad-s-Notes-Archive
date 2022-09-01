#include<iostream>
#include "Animal.h"

namespace sdds {
	bool debug = false;

	Animal::~Animal()
	{
		if (debug) std::cout << " Deleting Animal" << std::endl;
	}

	std::ostream& operator<<(std::ostream& ostr, Animal& A)
	{
		A.act();
		A.move();
		A.sound();
		return ostr;
	}


}
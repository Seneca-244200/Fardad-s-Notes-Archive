#include <iostream>
#include "dog.h"
#include "puppy.h"

namespace sdds {

	Puppy::Puppy(const char* name, int age, double weight) : Dog{ name, age }, m_weight{ weight }
	{
		if (debug) std::cout << "Creating " << getName() << " my little " << getAge() << "-year old puppy" << std::endl;
	}

	void Puppy::setWeight(double weight)
	{
		m_weight = weight;
	}

	Puppy& Puppy::move()
	{
		std::cout << getName() << " stumbles when walking " << std::endl;
		return *this;
	}

	Puppy::~Puppy()
	{
		if (debug) std::cout << "deleting " << getName() << " My Puppy" << std::endl;
	}


}
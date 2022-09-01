#include <iostream>
#include "dog.h"

namespace sdds {
	Dog::Dog(const char* name, int age) : Pet{name}, m_age{age}
	{
		if (debug) std::cout << "Creating " << getName() << " My Dog that is " << getAge() << std::endl;
	}

	void Dog::setAge(int age)
	{
		m_age = age;
	}

	int Dog::getAge()
	{
		return m_age;
	}

	Dog& Dog::act()
	{
		std::cout << getName() << " can shake hands" << std::endl;
		return *this;
	}

	Dog& Dog::move()
	{
		std::cout << getName() << " can fetch" << std::endl;
		return *this;
	}

	Dog& Dog::sound()
	{
		std::cout << getName() << " can bark" << std::endl;
		return *this;
	}

	Dog::~Dog()
	{
		if (debug) std::cout << "deleting " << getName() << " My dog" << std::endl;
	}

}
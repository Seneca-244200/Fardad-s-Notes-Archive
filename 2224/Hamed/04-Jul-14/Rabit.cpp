#include <iostream>
#include "Utils.h"
#include "Rabit.h"

namespace sdds {
	Rabbit::Rabbit(const char* name, const char* color) : Pet{name}
	{
		ut.strcpy(m_color, color, 11);
		if (debug) std::cout << "Creating " << getName() << " the Rabbit" << std::endl;
	}

	void Rabbit::setColor(const char* color)
	{
		ut.strcpy(m_color, color, 11);
	}

	const char* Rabbit::getColor()
	{
		return m_color;
	}

	Rabbit& Rabbit::act()
	{
		std::cout << getName() << " can chew" << std::endl;
		return *this;
	}

	Rabbit& Rabbit::move()
	{
		std::cout << getName() << " can jump" << std::endl;
		return *this;
	}

	Rabbit& Rabbit::sound()
	{
		std::cout << getName() << " is silent" << std::endl;
		return *this;
	}

	Rabbit::~Rabbit()
	{
		if (debug) std::cout << "deleting" << getName() << " the rabbit" << std::endl;
	}

}



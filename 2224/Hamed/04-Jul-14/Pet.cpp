#include <iostream>
#include "Pet.h"
#include "Utils.h"

namespace sdds {
	Pet::Pet(const char* name)
	{
		setName(name);
		if (debug) std::cout << "creating " << getName() << " the Pet" << std::endl;
	}

	void Pet::setName(const char* name)
	{
		ut.strcpy(m_name, name, 40);
	}

	const char* Pet::getName() const
	{
		return m_name;
	}

	Pet& Pet::act()
	{
		std::cout << "Act like a Pet";
		return *this;
	}

	Pet::~Pet()
	{
		if (debug) std::cout << "deleting " << getName() << " the Pet" << std::endl;
	}

}
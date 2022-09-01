#include <iostream>
#include "Cat.h"

using namespace std;

namespace sdds {
	
	Cat::Cat(const char* name, int noofLifes) : Animal{ name }, m_noofLifes{noofLifes} {
	
		if (debug) cout << "creating " << Animal::getName() << " the Cat" << endl;
	}

	void Cat::setnoofLifes(int noofLifes)
	{
		m_noofLifes = noofLifes;
	}

	int Cat::getnoofLifes()
	{
		return m_noofLifes;
	}

	Cat& Cat::act()
	{
		cout << Animal::getName() << " acts like a cat" << endl;
		return *this;
	}

	Cat& Cat::sound()
	{
		Animal::sound();
		cout << Animal::getName() << " sounds 'MEAW'" << endl;
		return *this;
	}

	Cat& Cat::play()
	{
		cout << Animal::getName() << " plays like a cat" << endl;
		return *this;
	}

	Cat::~Cat()
	{
		if (debug) cout << "deleteing " << Animal::getName() << " the Cat" << endl;
	}


}
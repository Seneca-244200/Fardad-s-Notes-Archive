#include <iostream>
#include "Cat.h"

using namespace std;

namespace sdds {

	Cat::Cat(const char* name, int noofLifes) {
		Animal::setName(name); // I have to use its parent's setter
		setnoofLifes(noofLifes);
		if (debug) cout << "creating " << Animal::getName() << " the Cat" << endl;
	}

	void Cat::setnoofLifes(int noofLifes)
	{
		m_noofLifes = noofLifes;
	}

	Cat& Cat::act() // shadows the animal act
	{
		//cout << m_name << " acts like an animal" << endl;
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
#include <iostream>
#include "Cat.h"

using namespace std;

namespace sdds {

	//Cat::Cat(const char* name, int noofLifes) {
		// NOW I DON'T WANT TO CREATE A NONAME ANIMAL
		// I WANT THE PARENT ANIMALBE CREATED WITH THE NAME GVEN 
		// TO THE CAT, SO I HAVE AN ANIMAL AND A CAT WITH THE SAME NAME

		//TRY THIS FIRST:
		//Animal(name); 
		// THIS GIVES ERROR BECAUSE A CONSTRUCTOR CANOT BE CALLED
	//SO, USE THE INITIALIZING SECTION IN THE CONSTRUCTOR, BETWEEN
	// PARANTHESIS AND THE CURLY BRACKET
	
	Cat::Cat(const char* name, int noofLifes) : Animal{ name }, m_noofLifes{noofLifes} {
		//setName(name);  // don't need anymore
		//setnoofLifes(noofLifes); // don't need anymore
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
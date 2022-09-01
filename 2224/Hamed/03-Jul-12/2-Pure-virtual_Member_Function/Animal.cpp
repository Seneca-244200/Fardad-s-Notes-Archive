#include <iostream>
#include "Animal.h"
#include "Utils.h"

using namespace std;

namespace sdds {

	bool debug = false;

	Animal::Animal(const char* name)
	{
		setName(name);
		if (debug) cout << "creating " << getName() << " the animal" << endl;
	}

	const char* Animal::getName() const
	{
		return m_name;
	}

	Animal& Animal::setName(const char* name)
	{
		ut.strcpy(m_name, name, 40);
		return *this;
	}

	Animal& Animal::act()
	{
		cout << m_name << " acts like an animal" << endl;
		return *this;
	}

	Animal& Animal::move()
	{
		cout << m_name << " moves like an animal" << endl;
		return *this;
	}

	//PURE VIRTUAL MEMBER FUNCTION
	// WE DON"T KNOW HOW AN ANIMAL MAKES A SOUND
	// UNLESS WE KNOW WHAT ANIMAL WE ARE
	// TALKING ABOUT! IN THE HEADER FILE THERFORE
	// SOUND HAS BEEN COMPLETLY VIRTULIZED AND THE
	// DEFINITION HAS BEEN COMMENTED
	// 
	//Animal& Animal::sound()
	//{
	//	cout << m_name << " sounds like an animal" << endl;
	//	return *this;
	//}

	Animal::~Animal()
	{
		if (debug) cout << "deleteing " << getName() << " the animal" << endl;
	}


}
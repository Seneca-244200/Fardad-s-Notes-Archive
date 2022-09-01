#ifndef SDDS_CAT_H
#define SDDS_CAT_H

#include "Animal.h"

namespace sdds {
	// Create a class cat that inherits animal's public parts
	// Cat must also have a number of lifes variable
	class Cat : public Animal {
		int m_noofLifes;
		// create a constructor that initializes the
		// animal part at the time of creation directly
	public:
		Cat(const char* name = "fifi", int noofLifes = 10);

		// has a setter for its number of lifes 
		void setnoofLifes(int noofLifes);

		// Has its own act
		Cat& act();

		// has an animal sound as well as its own sound
		Cat& sound();

		//has its own play
		Cat& play();

		// has a destructor
		~Cat();

	};


}

#endif
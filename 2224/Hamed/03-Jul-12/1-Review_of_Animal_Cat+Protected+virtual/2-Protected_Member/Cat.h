#ifndef SDDS_CAT_H
#define SDDS_CAT_H

#include "Animal.h"

namespace sdds {
	
	class Cat : public Animal {
		int m_noofLifes;

	public:
		Cat(const char* name = "fifi", int noofLifes = 10);
		void setnoofLifes(int noofLifes);
		int getnoofLifes();
		Cat& act();
		Cat& sound();
		Cat& play();
		~Cat();
		// We have to add this because
		// the only way to access getName
		// is inside a child module
		const char* sendName() const;

	};


}

#endif
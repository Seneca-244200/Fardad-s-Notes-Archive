#ifndef SDDS_DOG_H
#define SDDS_DOG_H
#include "Pet.h"

namespace sdds {
	class Dog : public Pet {
		int m_age = 0;

	public:
		Dog(const char* name, int age);
		void setAge(int age);
		int getAge();
		virtual Dog& act();
		virtual Dog& move();
		virtual Dog& sound();
		virtual ~Dog();

	};

}


#endif
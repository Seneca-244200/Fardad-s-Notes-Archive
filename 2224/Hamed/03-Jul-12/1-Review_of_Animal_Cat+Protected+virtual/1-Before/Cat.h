#ifndef SDDS_CAT_H
#define SDDS_CAT_H

#include "Animal.h"
//  A cat is an animal -> so cat inherits from animal 
//  A cat has number of lives, so number of lives is its memeber variable
//  Animal is not a CAT, so it has its own member variables and
//Functions. Unless a memebr function is dynamically dispatched
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

	};


}

#endif
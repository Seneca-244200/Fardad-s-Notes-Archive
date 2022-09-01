#ifndef SDDS_PUPPY_H
#define SDDS_PUPPY_H
#include "dog.h"

namespace sdds {
	class Puppy : public Dog {
		double m_weight = 0.00;

	public:
		Puppy(const char* name, int age, double weight);
		void setWeight(double weight);
		Puppy& move();
		~Puppy();

	};

}



#endif
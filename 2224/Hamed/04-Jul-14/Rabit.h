#ifndef SDDS_RABBIT_H
#define SDDS_RABBIT_H
#include "Pet.h"

namespace sdds {
	class Rabbit : public Pet {
		char m_color[12]{};

	public:
		Rabbit(const char* name, const char* color);
		void setColor(const char* age);
		const char* getColor();
		virtual Rabbit& act();
		virtual Rabbit& move();
		virtual Rabbit& sound();
		virtual ~Rabbit();

	};
	



}

#endif
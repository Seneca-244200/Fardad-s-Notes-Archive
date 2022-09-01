#ifndef SDDS_PET_H
#define SDDS_PET_H
#include "Animal.h"

namespace sdds {
	class Pet : public Animal {
		char m_name[41]{};

	public:
		Pet(const char* name);
		void setName(const char* name);
		const char* getName() const;
		virtual Pet& act();
		virtual Pet& move() = 0;
		virtual Pet& sound() = 0;
		virtual ~Pet();


	};

}



#endif // !SDDS_PET_H

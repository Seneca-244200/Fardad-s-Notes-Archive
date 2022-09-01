#ifndef SDDS_ANIMAL_H
#define SDDS_ANIMAL_H

// Virtuality causes the latest version of shadowed function
// to be called

namespace sdds {
	// define a class animal
	class Animal {
		// That has a static name
		char m_name[41]{};
		

	public:
		
		Animal(const char* name = "noName");
		const char* getName() const;
		Animal& setName(const char* name);
		// The word virtual has been added to the base class
		virtual Animal& act();
		virtual Animal& move(); // move doesn't exist in Cat so virtual doesn' affect it
		virtual Animal& sound();
		virtual ~Animal();

	};

	
	extern bool debug;

}

#endif // !SDDS_ANIMAL_H



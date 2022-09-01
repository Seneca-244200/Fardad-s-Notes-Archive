#ifndef SDDS_ANIMAL_H
#define SDDS_ANIMAL_H

// Virtuality causes the latest version of shadowed function
// to be called

namespace sdds {
	class Animal {
		char m_name[41]{};

	protected:  
		const char* getName() const;

	public:
		
		Animal(const char* name = "noName");
		
		Animal& setName(const char* name);
		virtual Animal& act();
		virtual Animal& move(); 
		// WE DON"T KNOW HOW AN ANIMAL MAKES A SOUND
		// THERFORE WE ARE MAKING THIS MEMBER FUNCTON
		// PURE VIRTUAL BY PUTTING =0 IN THE HEADER
		// AND NO DEFINITION IN THE CPP FILE
		virtual Animal& sound() = 0; 
		virtual ~Animal();

	};

	extern bool debug;

}

#endif 



#ifndef SDDS_ANIMAL_H
#define SDDS_ANIMAL_H

namespace sdds {
	class Animal {
		
	public:
		virtual Animal& act() = 0;
		virtual Animal& move() = 0;
		virtual Animal& sound() = 0;
		virtual ~Animal();
	};

	std::ostream& operator<<(std::ostream& ostr, Animal& A);
	extern bool debug;
}



#endif // !SDDS_ANIMAL_H

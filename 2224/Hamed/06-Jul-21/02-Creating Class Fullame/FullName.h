#ifndef SDDS_FULLNAME_H
#define SDDS_FULLNAME_H
#include "Name.h"

namespace sdds {
	class Fullname : public Name {
		// lastname to be dynamically allocated
		char* m_lastname{};
	public:
		Fullname(const char* name = nullptr, const char* lastname = nullptr);
		// rule of three
		Fullname(const Fullname& F);
		Fullname& operator=(const Fullname& F);
		virtual ~Fullname();

		// two queries
		const char* getLastname() const;

		virtual std::ostream& display(std::ostream& ostr = std::cout) const;
		virtual std::istream& read(std::istream& istr = std::cin);
	};

	std::ostream& operator<<(std::ostream& ostr, const Fullname& F);
	std::istream& operator>>(std::istream& istr, Fullname& F);
}

#endif // !SDDS_FULLNAME_H

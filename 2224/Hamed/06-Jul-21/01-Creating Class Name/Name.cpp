#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;

namespace sdds {
	Name::Name(const char* name)
	{
		if (name) {
			m_value = ut.alcpy(name);
		}
		else {
			m_value = ut.alcpy("");
		}
		if (debug) cout << "Created " << getName() << endl;
	}

	Name::Name(const Name& N)
	{
		if (debug) cout << "Creating a new Name and copying " << N.m_value << " to it" << endl;
		operator=(N);
		
	}

	Name& Name::operator=(const Name& N)
	{
		
		if (this != &N) {
			delete[] m_value;
			m_value = ut.alcpy(N.m_value);
		}
		return *this;
	}

	Name::~Name()
	{
		if (debug) cout << "Deleting " << getName() << endl;
		delete[] m_value;
	}

	const char* Name::getName() const
	{
		return m_value;
	}

	std::ostream& Name::display(std::ostream& ostr) const
	{
		return ostr << m_value;
	}

	std::istream& Name::read(std::istream& istr)
	{
		std::cout << " Enter a Name: ";
		delete[] m_value;
		m_value = ut.dynread(istr);
		return istr;
	}

	std::ostream& operator<<(std::ostream& ostr, const Name& N)
	{
		return N.display(ostr);
	}

	std::istream& operator>>(std::istream& istr, Name& N)
	{
		return N.read(istr);
	}


}
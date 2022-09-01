#include <iostream>
#include "FullName.h"
#include "Utils.h"

using namespace std;
namespace sdds {
	Fullname::Fullname(const char* name, const char* lastname) : Name{name}
	{
		if (lastname) m_lastname = ut.alcpy(lastname);
		else m_lastname = ut.alcpy("");
		cout << "Creating " << getName() << " " << getLastname() << endl;
	}
	// use the copy constructor of the name, by putting Name{F}, it has nothing to do with the default constructor of name
	Fullname::Fullname(const Fullname& F) : Name{F}
	{
		m_lastname = ut.alcpy(F.m_lastname);
	}
	// If Name had a default constructor we could use this

	//Fullname::Fullname(const Fullname& F) // ! Here to build
	//	// F (rememebr that this is a constructor) first Name 
	//	//part must be made. Since we are not specifiying what 
	//	//the constructor of Name should use, because there 
	//	//is no Name{F}, and there is no default constructor, 
	//	//we are recieving an error
	//{
	//	operator=(F);
	//}

	Fullname& Fullname::operator=(const Fullname& F)
	{
		Name::operator= (F);
		delete[] m_lastname;
		m_lastname = ut.alcpy(F.m_lastname);
		return *this;
	}

	Fullname::~Fullname()
	{
		delete[] m_lastname;
	}

	const char* Fullname::getLastname() const
	{
		return m_lastname;
	}

	std::ostream& Fullname::display(std::ostream& ostr) const
	{
		Name::display(ostr);
		ostr << " " << m_lastname;
		return ostr;
	}

	std::istream& Fullname::read(std::istream& istr)
	{
		cout << "Enter the fist Name: " << endl;
		Name::read(istr);
		cout << " Enter the lastname: " ;
		delete[] m_lastname;
		m_lastname = ut.dynread(istr);
		return istr;
	}

	std::ostream& operator<<(std::ostream& ostr, const Fullname& F)
	{
		return F.display(ostr);
	}

	std::istream& operator>>(std::istream& istr, Fullname& F)
	{
		return F.read(istr);
	}


}
#include "Fullname.h"
#include "Utils.h"
namespace sdds {
   Fullname::Fullname(const char* firstname, const char* lastname):Name(firstname){
      ut.aloCpy(m_lastname, lastname);
   }
   // this way is the safest way
   Fullname::Fullname(const Fullname& FN):Name(FN) { // you must take care of the base class even if it does not have a resource
      ut.aloCpy(m_lastname, FN.m_lastname);
   }
   /*Fullname::Fullname(const Fullname& FN) {
      operator=(FN);
   }*/
   Fullname& Fullname::operator=(const Fullname& FN){ // you must take care of the bass class's operator= even if it does not have a resource
      if (this != &FN) {
         Name::operator=(FN);
         ut.reAloCpy(m_lastname, FN.m_lastname);
      }
      return *this;
   }
   Fullname::~Fullname() {
      delete[] m_lastname;
   }
   std::ostream& Fullname::write(std::ostream& ostr) const
   {
      Name::write(ostr);
      if (m_lastname) {
         ostr << " " << m_lastname;
      }
      return ostr;
   }
}
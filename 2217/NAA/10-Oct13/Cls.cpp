#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Cls.h"
namespace sdds {
   void Cls::message(const char* mes, const char* value , bool newline){
#ifdef  SDDS_LIFETIME
      std::cout << mes;
      if (value) std::cout << value;
      if (newline) std::cout << std::endl;
#endif //  SDDS_LIFETIME
   }
   Cls::Cls() {
      strcpy(m_data, "D ");
      message("Defaulting Cls");
   }
   Cls::Cls(const char str[]) {
      strcpy(m_data, "I ");
      strcat(m_data, str);
      message("Instantiating ", str);
   }
   Cls::Cls(const Cls& C) {
      strcpy(m_data, "C ");
      strcat(m_data, C.m_data);
      message("Copying ", C.m_data);
   }

   Cls& Cls::operator=(const Cls& C) {
      if (this != &C) {
         message("Assigning ", m_data, false);
         message(" to ", C.m_data);
         strcpy(m_data, "= ");
         strcat(m_data, C.m_data);
      }
      return *this;
   }

   Cls::~Cls() {
      message("Deleting ", m_data);
   }

   std::ostream& Cls::display(std::ostream& ostr) const {
      return ostr << m_data;
   }

   std::istream& Cls::read(std::istream& istr) {
      return istr.getline(m_data, 1024);
   }

   std::ostream& operator<<(std::ostream& ostr, const Cls& C) {
      return C.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, Cls& C) {
      return C.read(istr);
   }

}
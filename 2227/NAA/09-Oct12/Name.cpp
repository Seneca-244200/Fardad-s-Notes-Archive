#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;
namespace sdds {

   Name::Name(const char* value) {
      if (value) {
         m_value = new char[strlen(value) + 1];
         strcpy(m_value, value);
      }
   }
   Name::~Name() {
      delete[] m_value;
   }
   Name::operator const char* () const   {
      return m_value;
   }
   Name::operator int() const{
      return sdds::strlen(m_value);
   }
   Name& Name::operator=(const Name& RO){
      if (this != &RO) {
         delete[] m_value;
         m_value = nullptr;
         if (RO.m_value) {
            m_value = new char[strlen(RO.m_value) + 1];
            strcpy(m_value, RO.m_value);
         }
      }
      return *this;
   }
   Name::Name(const Name& RO) {
      m_value = new char[strlen(RO.m_value) + 1];
      strcpy(m_value, RO.m_value);
   }
   std::ostream& Name::display(std::ostream& coutRef)const {
      if (m_value) {
         coutRef << m_value;
      }
      return coutRef;
   }
   std::istream& Name::read(std::istream& cinRef) {
      char local[128]{};
      delete[] m_value;
      m_value = nullptr;
      cinRef.getline(local, 128);
      if (cinRef) {
         m_value = new char[strlen(local) + 1];
         strcpy(m_value, local);
      }
      return cinRef;
   }
   std::ostream& operator<<(std::ostream& left,
      const Name& right) {
      return right.display(left);
   }
   std::istream& operator>>(std::istream& left,
      Name& right) {
      return right.read(left);
   }
}
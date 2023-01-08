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
   void Name::allocateAndCopy(const char* value) {
      if (value != nullptr) {
         m_value = new char[strlen(value) + 1];
         strcpy(m_value, value);
      }
   }
   Name::Name(const Name& A) {
      allocateAndCopy(A.m_value);
   }
   Name& Name::operator=(const Name& A) {
      if (this != &A) {
         delete[] m_value;
         m_value = nullptr; // putting this object into a safe emtpy state
         allocateAndCopy(A.m_value);
      }
      return *this;
   }
   Name::~Name() {
      delete[] m_value;
   }
   std::ostream& Name::display(std::ostream& coutRef)const {
      if (m_value) {
         coutRef << m_value;
      }
      return coutRef;
   }
   std::istream& Name::read(std::istream& cinRef){
      char local[128];
      delete[] m_value;
      m_value = nullptr;
      cinRef.getline(local, 128);
      if (cinRef) {
         allocateAndCopy(local);
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

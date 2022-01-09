#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace sdds {
   Name::Name(const char* name) {
      if (name && name[0]) {
         allocateAndCopy(name);
      }
      else {
         setEmpty();
      }
#ifdef SDDS_LIFETIME
      cout << "Creating " << *this << endl;
#endif

   }
   Name::Name(const Name& cp) {
      allocateAndCopy(cp.m_data,'$');
#ifdef SDDS_LIFETIME
      cout << "Coping " << *this << endl;
#endif
   }
   Name& Name::operator=(const Name& cp) {
      if (this != &cp) {
         allocateAndCopy(cp.m_data, '=');
      }
#ifdef SDDS_LIFETIME
      cout << "Assigning to " << *this << endl;
#endif
      return *this;
   }
   void Name::setEmpty() {
      m_data = nullptr;
   }
   void Name::allocateAndCopy(const char *name,char tag) {
      if (name) { // safe empty state
         delete[] m_data;
         if (tag != char(0)) {
            m_data = new char[strlen(name) + 2];
            m_data[0] = tag;
            strcpy(&m_data[1], name);
         }
         else {
            m_data = new char[strlen(name) + 1];
            strcpy(m_data, name);
         }
      }
   }
   Name::~Name() {
#ifdef SDDS_LIFETIME
      cout << "Killing " << *this << endl;
#endif
      delete[] m_data;
   }
   std::ostream& Name::display(std::ostream& ostr) const {
      return ostr << (m_data ? m_data : "No Name");
   }

   std::istream& Name::read(std::istream& istr) {
      char* temp = new char[2048];
      istr.getline(temp, 2048);
     // if (!istr.fail()) {
      if(istr){
         allocateAndCopy(temp);
      }
      else {
         delete[] m_data;
         setEmpty();
      }
      delete[] temp;
      return istr;
   }

   std::ostream& operator<<(std::ostream& leftOperand, const Name& rightOperand) {
      return rightOperand.display(leftOperand);
   }
   std::istream& operator>>(std::istream& leftOperand, Name& rightOperand) {
      return rightOperand.read(leftOperand);
   }

}  
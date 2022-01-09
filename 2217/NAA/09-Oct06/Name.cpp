#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace sdds {
   void Name::setEmpty() {
      m_data = nullptr;
   }
   Name::Name(const char* name) {
//      if (name != nullptr && name[0] != '\0') {
      if (name && name[0]) {
         m_data = new char[strlen(name) + 1];
         strcpy(m_data, name);
      }
      else {
         setEmpty();
      }
#ifdef  SDDS_LIFETIME
      cout << "Createing " << *this << endl;
#endif //  SDDS_LIFETIME
   }

   Name::Name(const Name& objectToBeCopied) {
      if (objectToBeCopied.m_data) { // if (objectToBeCopied.m_data == nullptr)
         // if the object to be copied acutally have data 
         m_data = new char[strlen(objectToBeCopied.m_data) + 2];
         m_data[0] = '#';
         strcpy(&m_data[1], objectToBeCopied.m_data);
      }
      else {
         // if the object tob e copied in blank
         m_data = nullptr;
      }
#ifdef  SDDS_LIFETIME
      cout << "Copying " << *this << endl;
#endif //  SDDS_LIFETIME
   }

   Name& Name::operator=(const Name& rightOperand) {
      if (this != &rightOperand) {
         delete[] m_data;
         if (rightOperand.m_data) {
            m_data = new char[strlen(rightOperand.m_data) + 2];
            m_data[0] = '=';
            strcpy(&m_data[1], rightOperand.m_data);
         }
         else {
            m_data = nullptr;
         }
#ifdef  SDDS_LIFETIME
         cout << "Assigned to " << rightOperand << endl;
#endif //  SDDS_LIFETIME
      }
      else {
#ifdef  SDDS_LIFETIME
         cout << "Self assignment of " << rightOperand << " was ignored!" << endl;
#endif //  SDDS_LIFETIME
      }
      return *this;
   }

   std::ostream& Name::display(std::ostream& ostr)const {
      /*if (m_data) {
         ostr << m_data;
      }
      else {
         ostr << "No Name";
      }
      return ostr;*/
      return ostr << (m_data ? m_data : "No Name");
   }

   std::istream& Name::read(std::istream& istr) {
      char* temp = new char[1024];
      istr.getline(temp, 1024);
      //if (!istr.fail()) {
      if (istr) { // same as above
         m_data = new char[strlen(temp) + 1];
         strcpy(m_data, temp);
      }
      else {
         delete[] m_data;
         setEmpty();
      }
      delete[] temp;
      return istr;
   }

   Name::~Name() {
#ifdef  SDDS_LIFETIME
      cout << "Killing " << *this << endl;
#endif //  SDDS_LIFETIME
      delete[] m_data;
   }

   std::ostream& operator<<(std::ostream& leftOperand, const Name& rightOperand) {
      return rightOperand.display(leftOperand);
   }

   std::istream& operator>>(std::istream& leftOperand, Name& rightOperand) {
      return rightOperand.read(leftOperand);
   }

}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace sdds {
   void Name::setEmpty() {
      m_data = nullptr;
   }
   void Name::allocatAndCopy(const char* str) {
      if (str && str[0]) {
         m_data = new char[strlen(str) + 1];
         strcpy(m_data, str);
      }
      else {
         setEmpty();
      }
   }
   Name::Name(const char* name) {
//      if (name != nullptr && name[0] != '\0') {
      allocatAndCopy(name);
   }
   Name::Name(const Name& copyFrom) {
      // no need to delete m_data, since it is a newborn
      allocatAndCopy(copyFrom.m_data);
   }
   Name& Name::operator=(const Name& rightOperand) {
      if (this != &rightOperand) {
         delete[] m_data;
         // m_data = nullptr; //is ok, but not needed here
         allocatAndCopy(rightOperand.m_data);
      }
      return *this;
   }
   Name::~Name() {
      delete[] m_data;
   }
   std::ostream& Name::display(std::ostream& ostr) const {
      //if (m_data) {
      //   ostr << m_data;
      //}
      //else {
      //   ostr << "No Name";
      //}
      //return ostr;
      return ostr << (m_data ? m_data : "No Name");
   }
   //std::istream& Name::read(std::istream& istr) {
   //   char* temp = new char[2048]; // names are not supposed to be more than 2048
   //   delete[] m_data;
   //   // m_data = nullptr; //is ok, but not needed here
   //   istr.getline(temp, 2048);
   //   if (!istr.fail()) {
   //      m_data = new char[strlen(temp) + 1];
   //      strcpy(m_data, temp);
   //   }
   //   else {
   //      setEmpty();
   //   }
   //   delete[] temp;
   //   return istr;
   //}
   std::istream& Name::read(std::istream& istr) {
      // 128 is small enough to be a local variable, this
      // will noe bloat the executable size
      char temp[128]; // names are not supposed to be more than 128
      delete[] m_data;
      // m_data = nullptr; //is ok, but not needed here
      istr.getline(temp, 128);
     // if (!istr.fail()) {
      if (istr) {  // same as above
            m_data = new char[strlen(temp) + 1];
         strcpy(m_data, temp);
      }
      else {
         setEmpty();
      }
      return istr;
   }
   std::ostream& operator<<(std::ostream& leftOperand, const Name& rightOperand) {
      return rightOperand.display(leftOperand);
   }
   std::istream& operator>>(std::istream& leftOperand, Name& rightOperand) {
      return rightOperand.read(leftOperand);
   }
}

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Utils.h"
#include "Name.h"
using namespace std;
namespace sdds {
   Name::Name(const char* value) {
      //if(value != nullptr){
      if (value) {
         Utils::alloCopy(m_value, value);
         /*m_value = new char[strlen(value) + 1];
         strcpy(m_value, value);*/
      }
      else {
         Utils::alloCopy(m_value, "");
         /*m_value = new char[1];
         m_value[0] = 0;*/
      }
   }
   Name::Name(const Name& N) {
      //  m_value = nullptr; no need since it is 
      // initialized to null already in class definition
      operator=(N);
   }
   Name& Name::operator=(const Name& RightOperand) {
      if (this != &RightOperand) {
         Utils::alloCopy(m_value, RightOperand.m_value);
         /*delete[] m_value;
         m_value = new char[strlen(RightOperand.m_value) + 1];
         strcpy(m_value, RightOperand.m_value);*/
      }
      return *this;
   }
   Name::~Name() {
      delete[] m_value;
      // m_value = nullptr; after this there is no Name object
      // then who cares if m_value is null or not?
   }
   void Name::display(ostream& ostr) const {
      ostr << m_value;
   }
 
   std::ostream& operator<<(std::ostream& ostr, const Name& N) {
      N.display(ostr);
      return ostr;
   }
}
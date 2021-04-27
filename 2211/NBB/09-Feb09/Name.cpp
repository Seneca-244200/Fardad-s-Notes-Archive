#include <iostream>
#include "Name.h"
#include "cstring.h"

using namespace std;
namespace sdds {


   Name::Name() {
      init();
   }

   Name::Name(const char* theName) {
      init();
      setName(theName);
   }
   Name::Name(const char* theName, int maxLen) {
      int len = strLen(theName) > maxLen ? maxLen : strLen(theName);
      m_value = new char[len + 1];
      strnCpy(m_value, theName, len);
      m_value[len] = char(0);
   }
   Name::~Name() { // destructor
      deallocate();
   }

   void Name::init() {
      m_value = nullptr; // wash
   }
   void Name::deallocate() {
      delete[] m_value; // emtpy
      m_value = nullptr;
   }
   Name& Name::setName(const char* theName) {
      deallocate();
      if (theName) {
         m_value = new char[strLen(theName) + 1];
         strCpy(m_value, theName);
      }
      return *this;
   }
   Name& Name::addToName(const char* theValue) {
      if (theValue) {
         int newlen = 0;
         if (m_value) {
            newlen = strLen(m_value);
         }
         newlen += strLen(theValue);
         char* temp = new char[newlen + 1];
         if (m_value) {
            strCpy(temp, m_value);
         }
         else {
            temp[0] = char(0); // '\0' or 0
         }
         strCat(temp, theValue);
         delete[] m_value;
         m_value = temp;
      }
      return *this;
   }
   Name& Name::assign(const Name& N) {
      if (this != &N) {  // OCD
         setName(N.m_value);
      }
      return *this;
   }
   ostream& Name::print(ostream& ostr)const {
      if (m_value) { 
         ostr << m_value;
      }
      else {
         ostr << "Null Name";
      }
      return ostr;
   }




}
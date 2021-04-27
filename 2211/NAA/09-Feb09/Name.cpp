#include "cstring.h"
#include "Name.h"
// a comment goes here
using namespace std;
namespace sdds {
 
   Name::Name(const char* thename, int maxLen) {
      int len = (size_t)strLen(thename) > (size_t)maxLen ? maxLen : strLen(thename);
      m_value = new char[len + 1];
      strnCpy(m_value, thename, len);
      m_value[len] = 0;
   }

 /*  Name* Name::returnThis() {
      return this;
   }
   Name& Name::returnTargetOfThis() {
      return *this;
   }*/

   Name& Name::addToName(const char* value) {
      if (value) {
         int len = 0;
         if (m_value) {
            len = strLen(m_value);
         }
         len += strLen(value);
         char* both = new char[len + 1];
         if (m_value) {
            strCpy(both, m_value);
         }
         else {
            both[0] = 0; // char(0);
         }
         strCat(both, value);
         delete[] m_value;
         m_value = both;
      }
      return *this;
   }

   Name::~Name() {
      deallocate();
   }
   void Name::init() {
      m_value = nullptr;
   }
   Name& Name::setEmpty() {
      delete[] m_value;
      m_value = nullptr;
      return *this;
   }
   Name& Name::setName(const char* value) {
      setEmpty();
      m_value = new char[strLen(value) + 1];
      strCpy(m_value, value);
      return *this;
   }

   std::ostream& Name::print(std::ostream& ostr) const {
      if (m_value) { 
         ostr << m_value;
      }
      else { // safe empty state
         ostr << "No Name";
      }
      return ostr;
   }

   void Name::deallocate() {
      delete[] m_value;
      m_value = nullptr;
   }

}
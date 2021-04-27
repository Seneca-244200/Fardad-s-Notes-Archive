#include <iostream>
#include "cstring.h"
#include "Name.h"
#define SDDS_DEBUG
using namespace std;
namespace sdds {
   //Name::Name() {  // constructor
   //   cout << "Creating a defult name" << endl;
   //   init();
   //}
   Name::Name(const char* theName) {
      cout << "Creating a Name with " << theName << endl;
      // Name(theName, 1000); Wrong you can NOT call a construcotr
      init();
      setName(theName);
   }
   Name::Name(const char* theName, int maxLen) {
      cout << "Createing name with maximum of " << maxLen << " chars" << endl;
      int len = strLen(theName) > maxLen ? maxLen : strLen(theName);
      m_value = new char[len + 1];
      strnCpy(m_value, theName, len);
      m_value[len] = char(0);
   }
   Name::~Name() { // destructor
      cout << "Removing ";
      print() << " from memory" << endl;
      deallocate();
   }
   void Name::init() {
      m_value = nullptr; // wash
   }
   void Name::deallocate() {
      delete[] m_value; // emtpy
      m_value = nullptr;
   }
   void Name::setName(const char* theName) {
      deallocate();
      m_value = new char[strLen(theName) + 1];
      strCpy(m_value, theName);
   }
   ostream& Name::print(ostream& ostr)const {
      if (m_value) { // no null
         ostr << m_value;
      }
      else {
         ostr << "Null Name";
      }
      return ostr;
   }




}
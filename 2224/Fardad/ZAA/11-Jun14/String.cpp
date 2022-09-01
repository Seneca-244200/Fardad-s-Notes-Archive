#include "String.h"
namespace sdds {
   char* String::strcpy(char* des, const char* src)const {
      int i;
      for(i = 0; src[i]; i++) des[i] = src[i];
      des[i] = char(0);
      return des;
   }
   int String::strlen(const char* str)const {
      int len;
      for(len = 0; str[len]; len++);
      return len;
   }
   void String::AlCpy(const char* cstr) {
      delete[] m_data;
      m_length = strlen(cstr);
      m_data = new char[m_length + 1];
      strcpy(m_data, cstr);
   }
   String::String() {
      //~(*this);
      operator~(); // make empty
   }
   String::String(const char* cStr) {
      AlCpy(cStr);
   }
/*
   // standard way of rule of three:
   String::String(const String& toCopy) {
      operator=(toCopy);
   }
   String& String::operator=(const String& toAssign) {
      if(this != &toAssign) {
         delete[] m_data;
         m_length = strlen(toAssign.m_data);
         m_data = new char[m_length + 1];
         strcpy(m_data, toAssign.m_data);
      }
      return *this;
   }
   // end standard
*/
 // Good desing, cleaner code :
   String::String(const String& toCopy) {
      AlCpy((const char*)toCopy);
   }
   String& String::operator=(const String& toAssign) {
      if(this != &toAssign) AlCpy((const char*)toAssign);
      return *this;
   }

   String::~String() {
      delete[] m_data;
   }


   char& String::operator[](int index) {
      return m_data[index % m_length];
   }

   // queries
   const char& String::operator[](int index) const {
      return m_data[index % m_length];
   }

   String::operator const char* ()const {
         return (const char*)m_data;
   }
   String::operator int()const {
      return m_length;
   }
   String::operator unsigned int() const {
      return (unsigned int)m_length;
   }
   String::operator bool()const {
      return m_length > 0;
   }
   String& String::operator~() {
      delete[] m_data;
      m_data = new char[1];
      m_length = 0;
      m_data[0] = 0; // empty null terminated cstring
      return *this;
   }
   std::ostream& String::display(std::ostream& ostr)const {
      return ostr << m_data;
   }

   std::istream& String::read(std::istream& istr) {
      char* data = new char[CstrReadBufSize];
      m_data = data;
      int noOfBufs = 1;
      bool done;
      do {
         done = true;
         istr.getline(m_data, CstrReadBufSize, m_delim);
         if(istr.fail()) {
            noOfBufs++;
            char* temp = new char[(CstrReadBufSize - 1) * noOfBufs + 1];
            strcpy(temp, data);
            delete[] data;
            data = temp;
            m_data = data + (CstrReadBufSize - 1) * (noOfBufs - 1);
            istr.clear();
            done = false;
         }
      } while(!done);
      m_data = new char[strlen(data) + 1];
      strcpy(m_data, data);
      delete[] data;
      return istr;
   }



   std::ostream& operator<<(std::ostream& ostr, const String& S) {
      return S.display(ostr);
   }
   std::istream& operator>>(std::istream& istr, String& S) {
      return S.read(istr);
   }
   String& String::delimiter(char val) {
      m_delim = val;
      return *this;
   }
}
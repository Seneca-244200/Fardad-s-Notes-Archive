#include "String.h"
namespace sdds {
   String::String() {
      m_data = new char[1];
      m_data[0] = 0; // null terminated empty cstring
      // m_length = 0; no need since initialzed to zero
   }
   String::String(const char* cstr) {
      AlCpy(cstr);
   }
   String::String(const String& toCopy) {
      //AlCpy(toCopy.m_data);
      //m_delimiter = toCopy.m_delimiter;
      operator=(toCopy);
   }
   String& String::operator=(const String& toAssing) {
      if(this != &toAssing) { // no self assignment
         AlCpy(toAssing.m_data);
         m_delimiter = toAssing.m_delimiter;
      }
      return *this;
   }
   String::~String() {
      delete[] m_data;
   }

   String:: operator const char* ()const {
      return m_data; // (const char*) m_data;
   }

   String::operator int() const {
      return m_length;
   }
   
   String::operator unsigned int()const {
      return (unsigned int)m_length;
   }
   String::operator bool()const {
      return m_length > 0;
   }

   std::ostream& String::display(std::ostream& ostr) const {
      return ostr << m_data;
   }

   std::istream& String::read(std::istream& istr) {
      delete[] m_data;
      char* data = new char[ReadBufSize];
      m_data = data;
      int noOfBufs = 1;
      bool done = true;
      do {
         done = true;
         istr.getline(m_data, ReadBufSize, m_delimiter);
         if(istr.fail()) {
            noOfBufs++;
            char* temp = new char[(ReadBufSize - 1) * noOfBufs + 1];
            strcpy(temp, data);
            delete[] data;
            data = temp;
            m_data = data + (ReadBufSize - 1) * (noOfBufs - 1);
            istr.clear();
            done = false;
         }
      } while(!done);
      m_data = new char[strlen(data) + 1];
      strcpy(m_data, data);
      delete[] data;
      return istr;
   }

   String& String::delimiter(char value) {
      m_delimiter = value;
      return *this;
   }

   void String::AlCpy(const char* cstr) {
      delete[] m_data; 
      m_length = strlen(cstr);
      m_data = new char[m_length + 1];
      strcpy(m_data, cstr);
   }



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

   // ask for help:
   std::ostream& operator<<(std::ostream& leftOperand, const String& ro) {
      return ro.display(leftOperand);
   }

   std::istream& operator>>(std::istream& leftOperand, String& ro) {
      return ro.read(leftOperand);
   }
}
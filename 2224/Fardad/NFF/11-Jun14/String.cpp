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
      m_data = new char[1];
      m_data[0] = 0;
      m_length = 0;
   }

   String::String(const char* cstr) {
      AlCpy(cstr);
   }
   
   String::operator const char* ()const {
      return m_data;
   }
   String::operator int()const {
      return m_length;
   }
   String::operator unsigned int()const {
      return (unsigned int)m_length;
   }

   String::operator bool() const {
      return m_length > 0;
   }

   const char& String::operator[](int index) const {
      return m_data[index % m_length];
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
            // alocate and resize
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

   char& String::operator[](int index) {
      return m_data[index % m_length];
   }

   String& String::delimiter(char delim) {
      m_delimiter = delim;
      return *this;
   }

   void String::operator~() {
      delete[] m_data;
      m_data = new char[1];
      m_data[0] = 0;
      m_length = 0;
   }


   String::String(const String& toCopy) {
      AlCpy(toCopy.m_data);
   }

   String& String::operator=(const String& toAssing) {
      AlCpy(toAssing.m_data);
      return *this;
   }

   String::~String() {
      delete[] m_data;
   }



   std::ostream& operator<<(std::ostream& ostr, const String& ro) {
      return ro.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, String& ro) {
      return ro.read(istr);
   }


}
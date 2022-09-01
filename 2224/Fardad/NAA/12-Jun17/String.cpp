#include "String.h"
namespace sdds {
   // cString Utilities
   const char* String::strstr(const char* str, const char* find)const {
      const char* faddress = nullptr;
      int i, flen = strlen(find), slen = strlen(str);
      for(i = 0; i <= slen - flen && strcmp(&str[i], find, flen); i++);
      if(i <= slen - flen) faddress = &str[i];
      return faddress;
   }

   char* String::strcpy(char* des, const char* src, int len) const {
      int i;
      for(i = 0; src[i] && (len < 0 || i < len); i++) {
         des[i] = src[i];
      }
      des[i] = 0; // turning the char array des, to a cString by null terminating it.
      return des;
   }
   int String::strcmp(const char* s1, const char* s2, int len)const {
      int i = 0;
      while((len < 0 || i < len - 1) && s1[i] && s2[i] && s1[i] == s2[i]) {
         i++;
      }
      return s1[i] - s2[i];
   }

   int String::strlen(const char* str)const {
      int len;
      for(len = 0; str[len]; len++);
      return len;
   }

   char* String::strcat(char* des, const char* src) const {
      int len = strlen(des);
      int i = 0;
      while(src[i]) {
         des[i + len] = src[i];
         i++;
      }
      des[i + len] = char(0);
      return des;
   }

   // end cString Utilities



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

   const char& String::operator[](int index) const {
      return m_data[index % m_length];
   }
   char& String::operator[](int index) {
      char* elem = &m_junk;
      if(index < 0) {
         elem = &m_data[index];
      }
      else if(index >= m_length) {
         resize(index + 1);
         for(int i = m_length; i < index+1; i++) {
            m_data[i] = ' ';
         }
         m_length = index + 1;
         elem = &m_data[index];
         m_data[index + 1] = 0;
      }
      return *elem;
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

   const char* String::contains(const String& cmp) {
      return strstr(m_data, cmp.m_data);
   }
   const char* String::contains(const char* cstr) {
      const char* ret = nullptr;
      if(cstr) {
         ret = strstr(m_data, cstr);
      }
      return ret;
   }


   String& String::operator+=(const char* cstr) {
      resize(m_length + strlen(cstr));
      m_length += strlen(cstr);
      strcat(m_data, cstr);
      return *this;
   }

   String& String::operator+=(const String& S) {
      operator+=((const char*)S);
      m_delimiter = S.m_delimiter;
      return *this;
   }

   String String::operator+(const char* str) const {
      String ret = *this;
      return ret += str;
   }
   // not needed since the compiler will cast the stirng automaticaly to a const char*
   String String::operator+(const String& S) const {
      String ret = *this;
      return ret += (const char*)S;
   }

   void String::AlCpy(const char* cstr) {
      delete[] m_data; 
      m_length = strlen(cstr);
      m_data = new char[m_length + 1];
      strcpy(m_data, cstr);
   }

   String& String::resize(int newsize) {
      char* temp = new char[newsize + 1];
      strcpy(temp, m_data, newsize < m_length ? newsize : m_length);
      delete[] m_data;
      m_data = temp;
      return *this;
   }



   // ask for help from a helper function:
   std::ostream& operator<<(std::ostream& leftOperand, const String& ro) {
      return ro.display(leftOperand);
   }

   std::istream& operator>>(std::istream& leftOperand, String& ro) {
      return ro.read(leftOperand);
   }
   String operator+(const char* leftOperand, const String& rightOperand) {
      String ret = leftOperand;
      return ret += rightOperand;
   }


   // comparison
   bool String::operator>(const String& ro) const {
      return strcmp(m_data, ro.m_data) > 0;
   }
   bool String::operator<=(const String& ro) const {
      return strcmp(m_data, ro.m_data) <= 0;
   }
   bool String::operator<(const String& ro) const {
      return strcmp(m_data, ro.m_data) < 0;
   }
   bool String::operator>=(const String& ro) const {
      return strcmp(m_data, ro.m_data) >= 0;
   }
   bool String::operator==(const String& ro) const {
      return strcmp(m_data, ro.m_data) == 0;
   }
   bool String::operator!=(const String& ro) const {
      return strcmp(m_data, ro.m_data) != 0;
   }




   bool String::operator>(const char* cstr) const {
      bool res = true;
      if(cstr) res = strcmp(m_data, cstr) > 0;
      return res;
   }
   bool String::operator<(const char* cstr) const {
      bool res = false;
      if(cstr) res = strcmp(m_data, cstr) < 0;
      return res;
   }
   bool String::operator>=(const char* cstr) const {
      bool res = true;
      if(cstr) res = strcmp(m_data, cstr) >= 0;
      return res;
   }
   bool String::operator<=(const char* cstr) const {
      bool res = false;
      if(cstr) res = strcmp(m_data, cstr) <= 0;
      return res;
   }
   bool String::operator==(const char* cstr) const {
      bool res = false;
      if(cstr) res = strcmp(m_data, cstr) == 0;
      return res;
   }
   bool String::operator!=(const char* cstr) const {
      bool res = false;
      if(cstr) res = strcmp(m_data, cstr) != 0;
      return res;
   }

   bool operator>(const char* leftOperand, const String& rigtoperand) {
      bool res = true;
      if (leftOperand) res = rigtoperand.strcmp(leftOperand, rigtoperand.m_data) > 0;
      return res;
   }

   bool operator<(const char* leftOperand, const String& rigtoperand) {
      bool res = false;
      if(leftOperand) res = rigtoperand.strcmp(leftOperand, (const char*)rigtoperand) > 0;
      return res;
   }
   bool operator>=(const char* leftOperand, const String& rigtoperand) {
      bool res = true;
      if(leftOperand) res = rigtoperand.strcmp(leftOperand, (const char*)rigtoperand) >= 0;
      return res;
   }
   bool operator<=(const char* leftOperand, const String& rigtoperand) {
      bool res = false;
      if(leftOperand) res = rigtoperand.strcmp(leftOperand, (const char*)rigtoperand) <= 0;
      return res;
   }
   bool operator==(const char* leftOperand, const String& rigtoperand) {
      bool res = false;
      if(leftOperand) res = rigtoperand.strcmp(leftOperand, (const char*)rigtoperand) == 0;
      return res;
   }
   bool operator!=(const char* leftOperand, const String& rigtoperand) {
      bool res = false;
      if(leftOperand) res = rigtoperand.strcmp(leftOperand, (const char*)rigtoperand) != 0;
      return res;
   }


}
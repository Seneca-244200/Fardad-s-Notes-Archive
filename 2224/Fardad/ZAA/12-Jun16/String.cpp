#include "String.h"
namespace sdds {
   char* String::strcpy(char* des, const char* src, int len)const {
      int i;
      for(i = 0; src[i] && (len < 0 || i < len); i++) {
         des[i] = src[i];
      }
      des[i] = char(0);
      return des;
   }
   int String::strcmp(const char* s1, const char* s2, int len)const {
      int i = 0;
      while(i < len - 1 && s1[i] && s2[i] && s1[i] == s2[i]) {
         i++;
      }
      return s1[i] - s2[i];
   }
   const char* String::strstr(const char* str, const char* find)const {
      const char* faddress = nullptr;
      int i, flen = strlen(find), slen = strlen(str);
      for(i = 0; i <= slen - flen && strcmp(&str[i], find, flen); i++);
      if(i <= slen - flen) faddress = &str[i];
      return faddress;
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
   int String::strcmp(const char* s1, const char* s2) const {
      int i;
      for(i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);
      return s1[i] - s2[i];
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
   void String::resize(int newsize) {
      char* temp = new char[newsize + 1];
      strcpy(temp, m_data, newsize);
      delete m_data;
      m_data = temp;
   }
   String::String() {
      //~(*this);
      operator~(); // make empty
   }
   String::String(const char* cStr) {
      AlCpy(cStr);
   }

 // Good desing, cleaner code :
   String::String(const String& toCopy) {
      operator=(toCopy);
   }
   String& String::operator=(const String& toAssign) {
      if(this != &toAssign) {
         AlCpy((const char*)toAssign);
         m_delim = toAssign.m_delim;
      }
      return *this;
   }

   String::~String() {
      delete[] m_data;
   }


   char& String::operator[](int index) {
      return m_data[index % m_length];
   }

   String& String::operator=(const char* cstr) {
      AlCpy(cstr);
      return *this;
   }

   String& String::operator++(int) {
      resize(++m_length);
      strcat(m_data, " ");
      return *this;
   }

   String& String::operator++() { // as a challenge to this with manual DMA
      String temp = " ";
      temp += *this;
      return *this = temp;
   }

   String& String::operator+=(const String& ro) {
      resize(m_length += ro.m_length);
      strcat(m_data, ro.m_data);
      return *this;
   }

   String& String::operator+=(const char* cstr) {
      if(cstr) {
         resize(m_length += strlen(cstr));
         strcat(m_data, cstr);
      }
      return *this;
   }

   String String::operator+(const char* cstr) const {
      String ret = *this;
      return ret += cstr;
   }

   String String::operator+(const String& ro) const {
      String ret = *this;
      return ret += ro;
   }

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
      return strcmp(m_data, cstr) > 0;
   }
   bool String::operator<(const char* cstr) const {
      return strcmp(m_data, cstr) < 0;
   }
   bool String::operator>=(const char* cstr) const {
      return strcmp(m_data, cstr) >= 0;
   }
   bool String::operator<=(const char* cstr) const {
      return strcmp(m_data, cstr) <= 0;
   }
   bool String::operator==(const char* cstr) const {
      return strcmp(m_data, cstr) == 0;
   }
   bool String::operator!=(const char* cstr) const {
      return strcmp(m_data, cstr) != 0;
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
   String operator+(const char* lo, const String& ro) {
      String ret = lo;
      return ret += ro;
   }

   bool operator<(const char* cstr, const String& ro) {
      return ro.strcmp(cstr, (const char*)ro) < 0;
   }
   bool operator>(const char* cstr, const String& ro) {
      return ro.strcmp(cstr, (const char*)ro) > 0;
   }
   bool operator<=(const char* cstr, const String& ro) {
      return ro.strcmp(cstr, (const char*)ro) <= 0;
   }
   bool operator>=(const char* cstr, const String& ro) {
      return ro.strcmp(cstr, (const char*)ro) >= 0;
   }
   bool operator==(const char* cstr, const String& ro) {
      return ro.strcmp(cstr, (const char*)ro) == 0;
   }
   bool operator!=(const char* cstr, const String& ro) {
      return ro.strcmp(cstr, (const char*)ro) != 0;
   }


   String& String::delimiter(char val) {
      m_delim = val;
      return *this;
   }
}
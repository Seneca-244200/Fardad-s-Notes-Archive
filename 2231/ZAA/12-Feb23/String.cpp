#include <iostream>
#include "String.h"
#include "Utils.h"

using namespace std;
namespace sdds {
   bool String::isEmpty() const{
      return m_data == nullptr;
   }
   void String::setEmpty(){
      m_data = nullptr;
      m_length = 0u;
   }
   ////                      same order of the attributes in class
   ///                              this happens second
   String::String(const String& S) :m_data{ nullptr }{
// constructor happens third
#ifdef SDDS_DEBUG
      //    cond ? value : value2;
      clog << "copying a string out of >";
      if(S)
         clog << S;
      else
         clog << "Emtpy String";
      clog << "<" << endl;
#endif // SDDS_DEBUG
      // have to make sure String is empty before reusing
      // the logic in opeator=
      operator=(S);
}

   String::String(const char* cstr) :m_data{ nullptr }{
#ifdef SDDS_DEBUG
      clog << "making a string out of >" << (cstr ? cstr : "Nothing") << "<" << endl;
#endif // SDDS_DEBUG

      if (cstr) {
         m_length = U.strlen(cstr);
         m_data = new char[m_length + 1];
         U.strcpy(m_data, cstr);
      }
   }
   ostream& String::display(ostream& ostr)const {
      if (*this) {
         ostr << m_data;
      }
      return ostr;
   }
   // challenge 
   // if you can remove limit of 4096, there are some bonus marks
   std::istream& String::read(std::istream& istr){
      char temp[4096]{};
      istr.getline(temp, 4096);
      if(istr) {
         if(*this) {
            delete[] m_data;
            setEmpty();
         }
         m_data = U.aloCopy(m_length, temp);
      }
      return istr;
   }
   size_t String::length()const {
      return m_length;
   }

   char& String::operator[](size_t index) {
      if(index >= m_length) {
         while(m_length <= index) {
            (*this) += " ";
         }
      }
      return m_data[index];
   }
   //const char& String::operator[](size_t index)const {
   //   if(*this) {
   //      return m_data[index % m_length];
   //   }
   //   else {
   //      return m_junk;
   //   }
   //}

   const char& String::operator[](size_t index)const {
      const char* ret = &m_junk;
      if(*this) {
         ret =  &m_data[index % m_length];
      } 
      return *ret;
   }


   String& String::operator=(const String& S){
      if (this != &S) { // prevents self copying
         delete[] m_data;
         setEmpty(); // set empty in case S is empty;
         if (S) {  
            m_length = S.m_length;
            m_data = new char[m_length + 1];
            U.strcpy(m_data, S.m_data);
         }
      }
      return *this;
   }
   String String::operator+(const char* cStr) const {
      //String copy = *this;
      //copy += cStr;
      //return copy;

      return String(*this) += cStr;
   }


   String String::operator+(const String& S) const {
      //String copy = *this;
      //copy += S;
      //return copy;

      return String(*this) += S;
   }
   String& String::operator+=(const String& S){
      if(S) {
         char* newData = new char[m_length + S.length() + 1];
         newData[0] = 0; // empty string;
         if(*this) {
            U.strcpy(newData, m_data);
         }
         U.strcat(newData, S.m_data);//  operator const char* ()const of S will be invoked
         m_length += S.length();
         delete[] m_data;
         m_data = newData;
      }
      return *this;
   }
   String& String::operator+=(const char* cStr) {
      if(cStr) {
         char* newData = new char[m_length + U.strlen(cStr) + 1];
         newData[0] = 0; // empty string;
         if(*this) {
            U.strcpy(newData, m_data);
         }
         U.strcat(newData, cStr);//  operator const char* ()const of S will be invoked
         m_length += U.strlen(cStr);
         delete[] m_data;
         m_data = newData;
   }
      return *this;
}
   String::~String(){
#ifdef SDDS_DEBUG
      clog << "killing string with >" << m_data << "<" << endl;
#endif
      delete[] m_data;
   }

   String::operator const char* ()const {
      return m_data;
   }
   String::operator bool() const {
      return !isEmpty();
   }
   String operator+(const char* cStr, const String& Ro) {
 /*     String result(cStr);
      result += Ro;
      return result;*/
      return String(cStr) += Ro; // createing a nameless String and += Ro
   }
   std::ostream& operator<<(std::ostream& ostr, const String& Ro) {
      return Ro.display(ostr);
   }

   std::istream& operator>>(std::istream& istr, String& Ro){
      return Ro.read(istr);
   }
}
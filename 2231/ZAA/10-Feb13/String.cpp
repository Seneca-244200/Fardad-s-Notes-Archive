#include <iostream>
#include "String.h"
#include "Utils.h"
#include "debug.h"
using namespace std;
namespace sdds {
   bool String::isEmpty() const{
      return m_data == nullptr;
   }
   void String::setEmpty(){
      m_data = nullptr;
      m_length = 0u;
   }
   String::String(const char* cstr) {
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
   std::istream& String::read(std::istream& istr){
      char temp[4096]{};
      if (*this) {
         delete[] m_data;
         setEmpty();
      }
      istr.getline(temp, 4096);
      m_data = U.aloCopy(m_length, temp);
      return istr;
   }
   size_t String::length()const {
      return m_length;
   }
   String::String(const String& S) {
      // first set to safe emtpy state (done already in class init)
      operator=(S); //  Potato
      //*this = S;     // Potaato
   }
   String& String::operator=(const String& S){
      if (this != &S) { // prevents self copying
         delete[] m_data;
         setEmpty(); // set empty in case S is empty;
         if (S.m_data) {  // the same as bool operator and !isEmpty
            m_length = S.m_length;
            m_data = new char[m_length + 1];
            U.strcpy(m_data, S.m_data);
         }
      }
      return *this;
   }
   String& String::operator+=(const String& S){
      char* newData = new char[m_length + S.length() + 1];
      newData[0] = 0; // empty string;
      if (*this) {
         U.strcpy(newData, m_data);
      }
      if (S) {
         U.strcat(newData, S);
      }
      m_length += S.length();
      delete[] m_data;
      m_data = newData;
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
   std::ostream& operator<<(std::ostream& ostr, const String& Ro){
      return Ro.display(ostr);
   }
   std::istream& operator>>(std::istream& istr, String& Ro)
   {
      return Ro.read(istr);
   }
}
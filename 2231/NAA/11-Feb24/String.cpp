/*
stages of intantiation:
when a object get created
1- in-class initializations
2- the initialization area
3- Proper constructor will be called
Object comes to life

*/
#include <iostream>
#include "String.h"
#include "Utils.h"
#include "debug.h"
using namespace std;
namespace sdds {
   void String::setEmpty(){
      m_data = nullptr;
      m_length = 0;
   }
   String::String(){}
   String::String(const char* cstr){
#ifdef  SDDS_DEBUG
      clog << "Creating String out of >" << (cstr?cstr:"NOTHING") << "<" << endl;
#endif //  SDDS_DEBUG
     
      if (cstr) {
         m_length = U.strlen(cstr);
         m_data = new char[m_length + 1];
         U.strcpy(m_data, cstr);
      }
   }
   String::String(const String& S) {
#ifdef  SDDS_DEBUG
      clog << "Copying  >" << (S ? S.m_data : "NOTHING") << "< into a new String" << endl;
#endif //  SDDS_DEBUG
      // make sure the DMA data pointer is null
      operator=(S);
   }
   String& String::operator=(const String& S){
      if (this != &S) {
         delete[] m_data;
         setEmpty();
         if (S) {
            m_length = S.length();
            m_data = new char[S.length() + 1];
            U.strcpy(m_data, S.m_data);
         }
      }
      return *this;
   }
   String::~String() {
#ifdef  SDDS_DEBUG
      clog << "Killing String containing >" << (m_data ? m_data : "NOTHING") << "<" << endl;
#endif //  SDDS_DEBUG
      delete[] m_data;
   }
   String::operator bool()const {
      return m_data != nullptr;
   }
   String::operator const char* () const {
      return m_data;
   }
   size_t String::length() const{
      return m_length;
   }
   String& String::operator+=(const String& R) {
      if (R) {
         char* newM_data = new char[length() + R.length() + 1];
         if (*this) {
            U.strcpy(newM_data, this->m_data);
         }
         else {
            newM_data[0] = 0;
         }
         U.strcat(newM_data, R.m_data);
         m_length += R.length();
         delete[] this->m_data;
         this->m_data = newM_data;
      }
      return *this;
   }
   String& String::operator+=(const char* cstr) {
      if (cstr) {
         char* newM_data = new char[length() + U.strlen(cstr) + 1];
         if (*this) {
            U.strcpy(newM_data, this->m_data);
         }
         else {
            newM_data[0] = 0;
         }
         U.strcat(newM_data, cstr);
         m_length += U.strlen(cstr);
         delete[] this->m_data;
         this->m_data = newM_data;
      }
      return *this;
   }
   String String::operator+(const String& Ro) const {
      //String temp = *this;
      //temp += Ro;
      //return temp;
      return String(*this) += Ro; // temp object are never copyed, but instead owned
   }
   String String::operator+(const char* cstr)const {
     /* String temp = *this;
      temp += cstr;
      return temp;*/
      return String(*this) += cstr;
   }
   ostream& String::display(ostream& ostr)const {
      if (*this) {
         ostr << m_data;
      }
      return ostr;
   }
   // remove the limit of 4096 without using the std::string of C++ and get bonus marks
   istream& String::read(istream& istr) {
      char temp[4096];
      istr.getline(temp, 4096);
      if (istr) {
         delete[] m_data;
         m_length = U.strlen(temp);
         m_data = new char[m_length + 1];
         U.strcpy(m_data, temp);
      }
      return istr;
   }

   char String::operator[](size_t  index)const {
      char ch = char(255);
      if(*this) {
         ch = m_data[index % m_length];
      }
      return ch;
   }

   char& String::operator[](size_t index) {
      if(index >= m_length) {
         while(m_length <= index) {
            (*this) += " ";
         }
      }
      return m_data[index];
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   String operator+(const char* leftOperand, const String& rightOperand) {
       return String(leftOperand)+= rightOperand;
   }

   ostream& operator<<(ostream& ostr, const String& S) {
       if (S) {
          S.display(ostr);
       }
       return ostr;
   }
   istream& operator>>(istream& istr, String& S)
   {
      return S.read(istr);
   }

}
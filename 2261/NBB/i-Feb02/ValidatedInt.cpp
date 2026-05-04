#include <iostream>
#include "ValidatedInt.h"
#include "cstr.h"
using namespace std;
namespace seneca {

     //:: is called scope resolution, in english 
     // ValidatedInt's initialze
// Member function: initializes the object, including dynamic allocation for m_title
   void ValidatedInt::initialize(const char* titleParam, int val, int minv, int maxv) {
      // Allocate and copy the m_title (dynamic C-string)
      m_title[0] = char(0);
      if (titleParam) {
         strcpy(m_title, titleParam,20);
      }
      m_minValue = minv;
      m_maxValue = maxv;
      setValue(val);  // Reuse setValue for validation
   }   // depends on what you call a default m_value for this class based
   // on your business logic
   ValidatedInt::ValidatedInt(const char* titleParam) {
      initialize(titleParam , 0, -100, 100);
   }

   ValidatedInt::ValidatedInt(const char* titleParam, int val, int minv, int maxv) {
      initialize(titleParam, val, minv, maxv);
   }


   // Member function: validates and sets the m_value (clamps to [min, max])
   ValidatedInt& ValidatedInt::setValue(int newVal) {
      if (newVal < m_minValue) {
         m_value = m_minValue;
      }
      else if (newVal > m_maxValue) {
         m_value = m_maxValue;
      }
      else {
         m_value = newVal;
      }
      return *this;
   }
   // Member function: gets the current m_value
   int ValidatedInt::getValue() const {
      return m_value;
   }

   // Member function: displays the current state
  const ValidatedInt& ValidatedInt::display() const {
      std::cout
         << "Title: " << (m_title ? m_title : "No Title")
         << " Value: " << m_value
         << " (range: " << m_minValue
         << " to " << m_maxValue << ")" << std::endl;
      return *this;
   }

  //// Member function: adds an amount to the m_value (with validation)
  //ValidatedInt& ValidatedInt::add(int amount) {
  //   setValue(m_value + amount);  // Reuse setValue to clamp after addition
  //   return *this;
  //}

  // Member function: adds an amount to the m_value (with validation)
  ValidatedInt& ValidatedInt::operator+=(int amount) {
     setValue(m_value + amount);  // Reuse setValue to clamp after addition
     return *this;
  }

  // Member function: reduces the m_value by an amount (with validation)
   ValidatedInt& ValidatedInt::operator-=(int amount) {
      setValue(m_value - amount);  // Reuse setValue to clamp after subtraction
      return *this;
   }
   ValidatedInt ValidatedInt::operator-(int amount)const{
      ValidatedInt reduced(m_title, m_value-amount, m_minValue, m_maxValue);
      return reduced;
   }
   ValidatedInt& ValidatedInt::operator++() {
      return operator+=(1);
   }
   ValidatedInt ValidatedInt::operator++(int) {
      ValidatedInt before = *this;
      operator+=(1);
      return before;
   }
   ValidatedInt::operator int() const   {
      return m_value;
   }
   int ValidatedInt::operator[](size_t index)const {
      int res{};
      index = index % 3;
      switch (index) {
      case 0:
         res = m_minValue;
         break;
      case 1:
         res = m_value;
         break;
      case 2: 
         res = m_maxValue;
         break;
      }
      return res;
   }
}
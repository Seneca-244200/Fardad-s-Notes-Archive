#include <iostream>
#include "ValidatedInt.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   
   ValidatedInt& ValidatedInt::initialize(const char* titleParam, int val, int minv, int maxv) {
      strcpy(m_title, titleParam, 50);
      m_minValue = minv;
      m_maxValue = maxv;
      operator=(val);  
      return *this; // no need for this, but no harm don1!!!!
   }  
   ValidatedInt::ValidatedInt(const char* titleParam) {
      initialize(titleParam, 0, -100, 100);
   }

   ValidatedInt::ValidatedInt(const char* titleParam, int val, int minv, int maxv) {
      initialize(titleParam, val, minv, maxv);
   }


   ValidatedInt& ValidatedInt::operator=( int newVal){
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

   ValidatedInt& ValidatedInt::operator=(const ValidatedInt& other)
   {
      return operator=(other.get());
   }

   int ValidatedInt::get()const{
      return m_value;
   }
   // Member function: displays the current state
   void ValidatedInt::display() const {
      std::cout
         << "Title: " << (m_title ? m_title : "No Title")
         << " Value: " << m_value
         << " (range: " << m_minValue
         << " to " << m_maxValue << ")" << std::endl;
   }
   // Member function: adds an amount to the m_value (with validation)
   ValidatedInt& ValidatedInt::operator+=(int amount) {
      operator=(m_value + amount);  // Reuse operator= to clamp after addition
      return *this;
   }

   // Member function: reduces the m_value by an amount (with validation)
   ValidatedInt& ValidatedInt::operator-=(int amount) {
      operator=(m_value - amount);  // Reuse operator= to clamp after subtraction  
      return *this;
   }

   ValidatedInt ValidatedInt::operator+(const ValidatedInt& other) const{
      ValidatedInt sum;
      sum = get() + other.get();
      return sum;
   }
   ValidatedInt ValidatedInt::operator-()const {
      ValidatedInt neg(m_title, -m_value, m_minValue, m_maxValue);
      return neg;
   }
   ValidatedInt& ValidatedInt::operator++() {
      operator=(m_value + 1);
      return *this;
   }
   ValidatedInt ValidatedInt::operator++(int) {
      ValidatedInt before = *this;
      operator=(m_value + 1);
      return before;
   }
   ValidatedInt::operator int() const {
      return m_value;
   }
   ValidatedInt::operator const char* () const {
      return m_title;
   }
   int ValidatedInt::operator[](size_t index)const {
      index = index % 3;
      int ret{};
      switch (index) {
      case 0:
         ret = m_minValue;
         break;
      case 1:
         ret = m_value;
         break;
      case 2:
         ret = m_maxValue;
         break;
      }
      return ret;
   }
}
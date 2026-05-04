#include <iostream>
#include "ValidatedInt.h"
#include "cstr.h"
using namespace std;
namespace seneca {
   // Member function: initializes the object, including dynamic allocation for m_title
   void ValidatedInt::initialize(const char* titleParam, int val, int minv, int maxv) {
      // Allocate and copy the m_title (dynamic C-string)
      m_title = nullptr;
      if (titleParam) {
         m_title = new char[strlen(titleParam) + 1];
         strcpy(m_title, titleParam);
      }

      m_minValue = minv;
      m_maxValue = maxv;
      setValue(val);  // Reuse setValue for validation
   }   // depends on what you call a default m_value for this class based
// on your business logic
   ValidatedInt::ValidatedInt(const char* titleParam) {
      initialize(titleParam, 0, -100, 100);
   }

   ValidatedInt::ValidatedInt(const char* titleParam, int val, int minv, int maxv) {
      initialize(titleParam, val, minv, maxv);
   }

   ValidatedInt::~ValidatedInt(){
      release();
   }

   void ValidatedInt::setValue( int newVal){
      if (newVal < m_minValue) {
         m_value = m_minValue;
      }
      else if (newVal > m_maxValue) {
        m_value = m_maxValue;
      }
      else {
         m_value = newVal;
      }
   }

   int ValidatedInt::getValue()const{
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
   void ValidatedInt::addToValue(int amount) {
      setValue(m_value + amount);  // Reuse setValue to clamp after addition
   }

   // Member function: reduces the m_value by an amount (with validation)
   void ValidatedInt::reduceValue(int amount) {
      setValue(m_value - amount);  // Reuse setValue to clamp after subtraction
   }
   void ValidatedInt::release() {
      delete[] m_title;
      m_title = nullptr;
   }
}
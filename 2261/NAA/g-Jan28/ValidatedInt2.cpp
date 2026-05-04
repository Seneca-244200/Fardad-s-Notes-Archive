#include <iostream>
#include "ValidatedInt.h"
using namespace std;
namespace seneca {
   void ValidatedInt::initialize( int val, int minv, int maxv){
      m_minValue = minv;
      m_maxValue = maxv;
      setValue(val);
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
      std::cout << "Value: " << m_value
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

}
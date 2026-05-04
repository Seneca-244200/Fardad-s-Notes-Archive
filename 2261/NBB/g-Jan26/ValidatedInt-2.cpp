#include <iostream>
#include "ValidatedInt.h"
using namespace std;
namespace seneca {

     //:: is called scope resolution, in english 
     // ValidatedInt's initialze
// Member function: initializes the object
   void ValidatedInt::initialize(int val, int minv, int maxv) {
      m_minValue = minv;
      m_maxValue = maxv;
      setValue(val);  // Reuse setValue for validation
   }

   // Member function: validates and sets the value (clamps to [min, max])
   void ValidatedInt::setValue(int newVal) {
      if (newVal < m_minValue) {
         value = m_minValue;
      }
      else if (newVal > m_maxValue) {
         value = m_maxValue;
      }
      else {
         value = newVal;
      }
   }
   // Member function: gets the current value
   int ValidatedInt::getValue() const {
      return value;
   }

   // Member function: displays the current state
   void ValidatedInt::display() const {
      std::cout << "Value: " << value
         << " (range: " << m_minValue
         << " to " << m_maxValue << ")" << std::endl;
   }

   // Member function: adds an amount to the value (with validation)
   void ValidatedInt::addToValue(int amount) {
      setValue(value + amount);  // Reuse setValue to clamp after addition
   }

   // Member function: reduces the value by an amount (with validation)
   void ValidatedInt::reduceValue(int amount) {
      setValue(value - amount);  // Reuse setValue to clamp after subtraction
   }

}
#include <iostream>
#include "ValidatedInt.h"
using namespace std;
namespace seneca {




   void initialize(ValidatedInt& vi,int val, int minv, int maxv) {
      vi.m_minValue = minv;
      vi.m_maxValue = maxv;
      setValue(vi, val);  // Reuse setValue for validation
   }

   void setValue(ValidatedInt& vi, int newVal) {
      if (newVal < vi.m_minValue) {
         vi.value = vi.m_minValue;
      }
      else if (newVal > vi.m_maxValue) {
         vi.value = vi.m_maxValue;
      }
      else {
         vi.value = newVal;
      }
   }

   int getValue(const ValidatedInt& vi) {
      return vi.value;
   }

   void display(const ValidatedInt& vi) {
      cout << "Value: " << vi.value
         << " (range: " << vi.m_minValue
         << " to " << vi.m_maxValue << ")" << std::endl;
   }

   void addToValue(ValidatedInt& vi, int amount) {
      setValue(vi, vi.value + amount);
   }

   void reduceValue(ValidatedInt& vi, int amount) {
      setValue(vi, vi.value - amount);
   }

}
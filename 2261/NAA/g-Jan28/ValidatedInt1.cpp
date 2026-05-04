#include <iostream>
#include "ValidatedInt.h"
using namespace std;
namespace seneca {
   void initialize(ValidatedInt& vi, int val, int minv, int maxv){
      vi.m_minValue = minv;
      vi.m_maxValue = maxv;
      setValue(vi, val);
   }

   void setValue(ValidatedInt& vi, int newVal){
      if (newVal < vi.m_minValue) {
         vi.m_value = vi.m_minValue;
      }
      else if (newVal > vi.m_maxValue) {
         vi.m_value = vi.m_maxValue;
      }
      else {
         vi.m_value = newVal;
      }
   }

   int getValue(const ValidatedInt& vi){
      return vi.m_value;
   }

   void display(const ValidatedInt& vi){
      cout << "Value: " << vi.m_value
         << " (range: " << vi.m_minValue
         << " to " << vi.m_maxValue << ")" << endl;
   }

   void addToValue(ValidatedInt& vi, int amount){
      setValue(vi, vi.m_value + amount);
   }

   void reduceValue(ValidatedInt& vi, int amount){
      setValue(vi, vi.m_value - amount);
   }

}
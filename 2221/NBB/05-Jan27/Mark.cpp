#include <iostream>
using namespace std;
#include "Mark.h"
namespace sdds {
   // sets it to an identifyable impossilbe state
   void Mark::setSafeEmpty() {
      delete[] m_title;
      m_title = nullptr;
      m_value = -1;
      m_max = 0;
   }
   // must be called only once at the begenning;
   void Mark::init() {
      m_title = nullptr;  // sets to empty state at the begning so no delete
      m_value = -1;
      m_max = 0;
   }
   void Mark::clearAtEnd() {
      delete[] m_title; // deallocates the memroy
      m_title = nullptr;
   }
   // may change
   bool Mark::isSafeEmpty() const {
      return m_title == nullptr;
   }

   bool Mark::set(int value) {
      bool res = false;
      if (value >= 0 && value < max()) {
         m_value = value;
         res = true;
      }
      else {
         setSafeEmpty();
      }
      return res;
   }

   bool Mark::setMax(int value) {
      bool res = false;
      if (value > 1 && value <= 1000) {
         m_value = value;
         res = true;
      }
      else {
         setSafeEmpty();
      }
      return res;
   }

   void Mark::display() const {
      if (isSafeEmpty()) {
         cout << "Bad mark!" << endl;
      }
      else {
         cout << get() << "/" << max() << endl;
      }
   }

   int Mark::get() const {
      return m_value;
   }

   int Mark::max() const {
      return m_max;
   }

}
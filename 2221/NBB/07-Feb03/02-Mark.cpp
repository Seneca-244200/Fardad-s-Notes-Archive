//~fardad.soleimanloo/submit IWatchedFeb3
#include <iostream>
using namespace std;
#include "Mark.h"
#include "Utils.h"
namespace sdds {
   // sets it to an identifyable impossilbe state
   void Mark::setSafeEmpty() {
      dealloc();
      m_value = -1;
      m_max = 0;
   }
   void Mark::dealloc() {
      delete[] m_title;
      m_title = nullptr;
   }
   Mark::Mark() {
      init(); 
   }
   Mark::~Mark() {
      clearAtEnd();
   }
   // must be called only once at the begenning;
   void Mark::init() {
      m_title = nullptr;  // sets to empty state at the begning so no delete
      m_value = -1;
      m_max = 0;
   }
   void Mark::clearAtEnd() {
      dealloc();
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

   bool Mark::setMax(int maxValue) {
      bool res = false;
      if (maxValue > 1 && maxValue <= 1000) {
         m_max = maxValue;
         res = true;
      }
      else {
         setSafeEmpty();
      }
      return res;
   }

   void Mark::display() const {
      if (isSafeEmpty()) {
         cout << "Ivalid mark!" << endl;
      }
      else {
         cout << m_title<<": "<< get() << "/" << max() << endl;
      }
   }

   int Mark::get() const {
      return m_value;
   }

   int Mark::max() const {
      return m_max;
   }
   void Mark::setTitle(const char* title) {
      dealloc();
      if (title) {
         m_title = new char[strLen(title) + 1];
         strCpy(m_title, title);
      }
   }
   void Mark::set(const char* title, int value, int max) {
      setTitle(title);
      setMax(max);
      set(value);
   }
   void Mark::read() {
      int value = 0;
      value = getint();
      while(value < 0 || value > max()){
         cout << "Invalid mark (0>=value<=" << max() << ": ";
         value = getint();
      }
      set(value);
   }
   int Mark::percent()const {
      return int(double(get()) / max() * 100);
   }


}
#include <iostream>
using namespace std;
#include "Mark.h"
#include "Utils.h"
namespace sdds {
   int MaxMarkValue = 1000;
   void Mark::setSafeEmpty() {
      deAllocSafely();  // 
      m_value = -1;
      m_max = 0;
   }
   void Mark::deAllocSafely() {
      delete[] m_title;
      m_title = nullptr;
   }
   Mark::Mark() {
      initialize();
   }
   Mark::~Mark() {
      clearAtEnd();
   }
   void Mark::initialize() {
      // From DMA regeulations
      // we set unused pointers to nullptr
      // before use (initialize them to nullptr)
      m_title = nullptr;
      //deAllocSafely(); can not call here
      setSafeEmpty();
   }
   void Mark::clearAtEnd() {
      // no need for safeEmptyState, since
      // the object is not suppoed to be used
      // after this.
      deAllocSafely();
   }

   void Mark::set(int markValue) {
      if (markValue >= 0 && markValue <= max()) {
         m_value = markValue;
      }
      else {
         setSafeEmpty();
      }
   }

   void Mark::setTitle(const char* titleOfMark) {
      deAllocSafely(); // following DMA rules
      if (titleOfMark != nullptr) {
         m_title = new char[strLen(titleOfMark) + 1];
         strCpy(m_title, titleOfMark);
      }
      else {
         setSafeEmpty();
      }
   }

   void Mark::setMaxValue(int maxValue) {
      if (maxValue > 0 && maxValue <= MaxMarkValue) {
         m_max = maxValue;
      }
      else {
         setSafeEmpty();
      }
   }

   void Mark::set(const char* titleOfMark, 
        int markValue, 
        int maxValueForMark) {
      setTitle(titleOfMark);
      set(markValue);
      setMaxValue(maxValueForMark);
   }

   void Mark::read(const char* prompt) {
      int value = getint(prompt);
      while (value<0 || value > max()) {
         cout << "Invalid mark, (0<=value<=" 
              << max() << "), retry: ";
         value = getint();
      }
      set(value);
   }


   // queries
   ostream& Mark::display(const char* message)const {
      if (message) cout << message;
      if (isEmpty()) {
         cout << "Invalid Mark!";
      }
      else {
         cout << m_title << ": " << value() 
            << "/" << max();
      }
      return cout;
   }

   int Mark::max()const {
      return m_max;
   }

   int Mark::value()const {
      return m_value;
   }

   void Mark::grade(char* grade)const {
      int p = percent();
      if (p < 50) {
         strCpy(grade, "F");
      }
      else if (p < 55) {
         strCpy(grade, "D");
      }
      else if (p < 60) {
         strCpy(grade, "D+");
      }
      else if (p < 65) {
         strCpy(grade, "C");
      }
      else if (p < 70) {
         strCpy(grade, "C+");
      }
      else if (p < 75) {
         strCpy(grade, "B");
      }
      else if (p < 80) {
         strCpy(grade, "B+");
      }
      else if (p < 90) {
         strCpy(grade, "A");
      }
      else if (p <= 100) {
         strCpy(grade, "A+");
      }
   }

   int Mark::percent()const {
      return int(( value() / double(max() )) * 100);
   }

   bool Mark::isEmpty() const {
      return m_title == nullptr;
   }



}
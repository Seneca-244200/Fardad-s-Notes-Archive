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
      // From DMA regeulations
      // we set unused pointers to nullptr
      // before use (initialize them to nullptr)
      m_title = nullptr;
      //deAllocSafely(); can not call here
      setSafeEmpty();
#ifdef SDDS_DEBUG
      cout << "Defaulting Mark" << endl;
#endif // SDDS_DEBUG

   }
   // copying is required for any  class holding resources outside of its 
   // scope (in our case usually DMA)
   Mark::Mark(const Mark& toCopyFrom) {
     // WRONG you CANNOT CALL A CONSTRUCTOR
     // Mark(toCopyFrom.m_title, toCopyFrom.m_value, toCopyFrom.m_max);
      m_title = nullptr;
      set(toCopyFrom.m_title, toCopyFrom.m_value, toCopyFrom.m_max);
#ifdef SDDS_DEBUG
      cout << "Copying ";
      toCopyFrom.display() << endl;
#endif // SDDS_DEBUG

   }
   Mark::Mark(const char* titleOfMark,int markValue, int maxValueForMark) {
      //Mark();  // you CANNOT DO THIS!!!!!!!
      m_title = nullptr;
      set(titleOfMark, markValue, maxValueForMark);
#ifdef SDDS_DEBUG
      cout << "Initializing to ";
      display() << endl;
#endif // SDDS_DEBUG
   }
   Mark::~Mark() {
#ifdef SDDS_DEBUG
      cout << "Killing ";
      display() << endl;
#endif // SDDS_DEBUG
      // no need for safeEmptyState, since
      // the object is not suppoed to be used
      // after this.
      deAllocSafely();
   }



   Mark& Mark::set(int markValue) {
      if (markValue >= 0 && markValue <= max()) {
         m_value = markValue;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }

   Mark& Mark::setTitle(const char* titleOfMark) {
      deAllocSafely(); // following DMA rules
      if (titleOfMark != nullptr) {
         m_title = new char[strLen(titleOfMark) + 1];
         strCpy(m_title, titleOfMark);
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }

   Mark& Mark::setMaxValue(int maxValue) {
      if (maxValue > 0 && maxValue <= MaxMarkValue) {
         m_max = maxValue;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }

   Mark& Mark::set(const char* titleOfMark, 
        int markValue, 
        int maxValueForMark) {
      setTitle(titleOfMark);
      // because of the design the max value 
      // must be set before the mark value is set
      setMaxValue(maxValueForMark); 
      set(markValue);
      // retrun me;
      return *this;
   }

   Mark& Mark::read(const char* prompt) {
      int value = getint(prompt);
      while (value<0 || value > max()) {
         cout << "Invalid mark, (0<=value<=" 
              << max() << "), retry: ";
         value = getint();
      }
      set(value);
      return *this;
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

   const Mark& Mark::grade(char* grade)const {
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
      return *this;
   }

   int Mark::percent()const {
      return int(( value() / double(max() )) * 100);
   }

   bool Mark::isEmpty() const {
      return m_title == nullptr;
   }



}
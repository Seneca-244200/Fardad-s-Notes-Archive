//~fardad.soleimanloo/submit IWatchedFeb3
#include <iostream>
using namespace std;
#include "BadMark.h"
#include "Utils.h"
#define SDDS_DEBUG
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
      m_title = nullptr;  // sets to empty state at the begning so no delete
      m_value = -1;
      m_max = 0;
#ifdef SDDS_DEBUG
      cout << "Defaulting Mark " << endl;
#endif // SDDS_DEBUG
   }
   Mark::Mark(const char* title, int markValue, int MaxValueForMark) {
      m_title = nullptr; // this must be done because
             //set deallocates the m_title before setting!
      set(title, markValue, MaxValueForMark);
#ifdef SDDS_DEBUG
      cout << "Initializting to  ";
      display() << endl;
#endif
   }
   Mark::Mark(const Mark& M) {// special overload for the constructor called Copy Constructor
      m_title = nullptr;
      set(M.m_title, M.m_value, M.m_max);
#ifdef SDDS_DEBUG
      cout << "Copying ";
      M.display() << endl;
#endif
   }
   Mark::~Mark() {
#ifdef SDDS_DEBUG
      cout << "Killing ";
      display() << endl;
#endif
      dealloc();
   }
   // may change
   bool Mark::isSafeEmpty() const {
      return m_title == nullptr;
   }

   Mark& Mark::set(int value) {
      if (value >= 0 && value <= m_max) {
         m_value = value;
      }
      else {
         setSafeEmpty();
      }
      return *this;  // me
   }

   Mark& Mark::setMax(int maxValue) {
      if (maxValue > 1 && maxValue <= 1000) {
         m_max = maxValue;
      }
      else {
         setSafeEmpty();
      }
      return *this;// this is the address of the current object of type Mark
                   // *this becomes the target of that address
                   // *this is the reference of the current
   }

   ostream& Mark::display() const {
      if (isSafeEmpty()) {
         cout << "Ivalid mark!" ;
      }
      else {
         cout << m_title<<": "<< get() << "/" << m_max ;
      }
      return cout;
   }

   int Mark::get() const {
      return m_value;
   }

 /*  int Mark::max() const {
      return m_max;
   }*/
   void Mark::setTitle(const char* title) {
      dealloc();
      if (title) {
         m_title = new char[strLen(title) + 1];
         strCpy(m_title, title);
      }
   }
   Mark& Mark::set(const char* title, int value, int max) {
      setTitle(title);
      setMax(max);
      set(value);
      return *this;
   }
   void Mark::read() {
      int value = 0;
      value = getint();
      while(value < 0 || value > m_max){
         cout << "Invalid mark (0>=value<=" << m_max << ": ";
         value = getint();
      }
      set(value);
   }
   //int Mark::percent()const {
   //   return int(double(get()) / max() * 100);
   //}
   const Mark& Mark::grade(char* grade)const {
      int p = int(m_value / double(m_max)*100);
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
   //  helper functions
   void displayMarkInDetail(const Mark& A) {
      char grd[3];
      A.display();
      A.grade(grd);
      cout << ", " << int(A.m_value/ double(A.m_max)*100) << "%, " << grd << endl;
   }
   int average(const Mark& first, const Mark& second) {
      return (int(first.m_value / double(first.m_max) * 100) + int(second.m_value / double(second.m_max) * 100)) / 2;
   }



}
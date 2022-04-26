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
      operator=(M);
#ifdef SDDS_DEBUG
      cout << "Copying ";
      M.display() << endl;
#endif
   }
   Mark& Mark::operator=(const Mark& toAssingFrom) {
      if (this != &toAssingFrom) { // prevent self assignment
         delete[] m_title;;
         m_title = nullptr;
         set(toAssingFrom.m_title, toAssingFrom.m_value, toAssingFrom.m_max);
#ifdef SDDS_DEBUG
         cout << "Assigning ";
         M.display() << endl;
#endif
      }
      return *this;
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
      if (value >= 0) {
         m_value = value;
      }
      if(value > m_max) {
         m_value = m_max;
      }
      return *this;  
   }

   Mark& Mark::setMax(int maxValue) {
      if (maxValue > 1 && maxValue <= 1000) {
         m_max = maxValue;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }

   ostream& Mark::display(ostream& ostr) const {
      if (isSafeEmpty()) {
         ostr << "Ivalid mark!" ;
      }
      else {
         ostr << m_title<<": "<< get() << "/" << max() ;
      }
      return ostr;
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
   Mark& Mark::set(const char* title, int value, int max) {
      setTitle(title);
      setMax(max);
      set(value);
      return *this;
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
   Mark& Mark::operator+=(const Mark& M) {  // to be done later

      return *this;
   }
   Mark& Mark::operator+=(int value) {
      m_value += value;
      if (m_value > m_max) {
         m_value = m_max;
      }
      if (m_value < 0) {
         m_value = 0;
      }
      return *this;
   }
   Mark Mark::operator+(int value) const {
      return Mark(m_title, m_value + value, m_max); 
   }

   Mark Mark::operator+(const Mark& rightOperand) const {
      Mark sum;
      if (*this && rightOperand) {
         char* title = new char[strLen(m_title) + strLen(rightOperand.m_title) + 6];
         strCpy(title, m_title);
         strCat(title, " and ");
         strCat(title, rightOperand.m_title);
         sum.set(title, percent() + rightOperand.percent(), 100);
         delete[] title;
      }
      return sum;
   }

   const char* Mark::grade( char* grade ) {
      int p = percent();
      if (p < 50) {
         strCpy(m_tempGrade, "F");
      }
      else if (p < 55) {
         strCpy(m_tempGrade, "D");
      }
      else if (p < 60) {
         strCpy(m_tempGrade, "D+");
      }
      else if (p < 65) {
         strCpy(m_tempGrade, "C");
      }
      else if (p < 70) {
         strCpy(m_tempGrade, "C+");
      }
      else if (p < 75) {
         strCpy(m_tempGrade, "B");
      }
      else if (p < 80) {
         strCpy(m_tempGrade, "B+");
      }
      else if (p < 90) {
         strCpy(m_tempGrade, "A");
      }
      else if (p <= 100) {
         strCpy(m_tempGrade, "A+");
      }
      if (grade) strCpy(grade, m_tempGrade);
      return m_tempGrade;
   }
   std::ostream& operator<<(std::ostream& ostr, const Mark& M) {
      return M.display(ostr);
   }
   int operator+(int value, const Mark& rO) {
      return rO.get()+ value;
   }
   Mark::operator const char* () const {
      return (const char*)m_title;
   }
   Mark::operator bool() const {
      return !isSafeEmpty();
   }
   Mark& Mark::operator++() {
      return operator+=(1);
   }
   // to make N++ work like the int++
   Mark Mark::operator++(int) {
      Mark prev(*this);
      operator+=(1);
      return prev;
   }
   bool Mark::operator==(const Mark& rO) const {
      // *this is the left operand
      // return this->percent() == rO.percent();
      return percent() == rO.percent();
   }
}
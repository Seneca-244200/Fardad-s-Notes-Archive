#include <iostream>
#include <iomanip>
#include "Mark.h"

namespace sict {
   // first casting m_value to double to make the division a double division
   // then cast it back to int to have the percentage returned
   int Mark::weightedMark()const {
      return int(double(m_value) / m_maxValue * 100);
   }
   double Mark::gpa()const {
      return 4.0 * m_value / m_maxValue;
   }
   const char* Mark::grade()const {
      return m_grade;
   }

   void Mark::displayType(int dType) {
      m_displayType = dType;
   }
   void Mark::setGrade() {
      // set both element 1 and 2 to terminating NULL in case there is no '+'
      strcpy(m_grade, "");
      m_grade[2] = m_grade[1] = char(0);
      int wm = weightedMark();
      if (wm >= 80) {
         m_grade[0] = 'A';
         if (wm >= 90) {
            m_grade[1] = '+';
         }
      }
      else if (wm >= 70) {
         m_grade[0] = 'B';
         if (wm >= 75) {
            m_grade[1] = '+';
         }
      }
      else if (wm >= 60) {
         m_grade[0] = 'C';
         if (wm >= 65) {
            m_grade[1] = '+';
         }
      }
      else if (wm >= 50) {
         m_grade[0] = 'D';
         if (wm >= 55) {
            m_grade[1] = '+';
         }
      }
      else if (wm >= 0) {
         m_grade[0] = 'F';
      }
      else { // an invalid mark
         m_grade[0] = '?';
      }
   }
   void Mark::setMaxValue(int maxValue) {
      if (maxValue == 0) maxValue = 1; // prevent division by zero
      m_maxValue = maxValue;
   }
   // this is just an example to show how to use the "this" pointer to resolve 
   // shadowing in a method 
   // this->m_value is the m_value attribute in class
   // m_value is the argument that shadows the attribute
   void Mark::set(int m_value) {
      this->m_value = m_value; 
      // (*this).m_value = m_value;
      setGrade();
   }
   void Mark::display()const {
      if (m_displayType == DSP_GRADE) {
         std::cout << grade();
      }
      else if (m_displayType == DSP_GPA) {
         std::cout << std::setprecision(1) << std::fixed << gpa();

      }
      else if (m_displayType == DSP_MARK) {
         std::cout << weightedMark();
      }
      else {
         std::cout << "Bad display type for a mark";
      }
   }
}
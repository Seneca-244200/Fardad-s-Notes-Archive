#include <iostream>
#include <iomanip>
#include "Mark.h"
namespace sict {

   double Mark::points() const{
      double ret = m_points;
      if (m_points > double(m_maxPoints)) {
         ret = -1;
      }
      return ret;
   }
   void Mark::points(double value) {
      m_points = value;
      setGrade();
   }
   int Mark::maxPoints()const {
      return m_maxPoints;
   }
   void Mark::maxPoints(int value) {
      m_maxPoints = value;
      setGrade();
   }
   int Mark::weightedMark()const {
      return int(points() / maxPoints() * 100 );
   }
   const char* Mark::grade()const {
      return m_grade;
   }
   double Mark::gpa()const {
      return 4.0 * points() / maxPoints();
   }
   void Mark::setGrade() {
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
      else {
         m_grade[0] = '?';
      }
   }

  void Mark::displayType(int dType) {
     m_displayType = DSP_MARK;
     if (dType == DSP_GRADE || dType == DSP_GPA) {
        m_displayType = dType;
     }
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
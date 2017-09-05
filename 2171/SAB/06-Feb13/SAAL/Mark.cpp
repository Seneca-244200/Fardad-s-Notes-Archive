#include <iostream>
#include <iomanip>
#include "Mark.h"
namespace sict {
   void Mark::setEmpty() {
      m_displayType = DSP_INVALID;
      m_grade[0] = '\0';
 //     m_grade[0] = 0;
 //     strcpy(m_grade, "");
      m_points = -1.0;
      m_maxPoints = 100;
   }
   bool Mark::isValid()const {
      bool ret = true;
      if (m_displayType == DSP_INVALID) {
         ret = false;
      }
      return ret;
   }
   Mark::Mark() {
      setEmpty();
   }
   void Mark::set(int maxPoints, double arg_points) {
      displayType(DSP_MARK);
      points(arg_points);
      this->maxPoints(maxPoints);
      setGrade();
   }
   Mark::Mark(double points) {
      set(100, points);
   }   
   Mark::Mark(int maxPoints, double points) {
      set(maxPoints, points);
   }
   double Mark::value()const {
      return points() / maxPoints();
   }
   bool Mark::operator>(const Mark& M)const {
      return value() > M.value();
   }
   bool Mark::operator<(double d)const {
      return value() < d;
   }

   // cosnt Mark& Mark::operator++() { // this is better
   Mark Mark::operator++() {
      int val = points();
      val++;
      points(double(val));
      return *this;
   }
   Mark Mark::operator++(int) {
      Mark keep = *this;
      operator++();
      //int val = points();
      //val++;
      //points(double(val));
      return keep;
   }
   Mark Mark::operator+ (const Mark& M)const {
      Mark res = *this;
      // res = res + M what ever you do to make this happen
      return res;
   }
   bool Mark::operator!()const {
      return !isValid();
   }
   const Mark& Mark::operator+=(int val) {
      points(points() + val);
      return *this;
   }
   double Mark::points() const{
      double ret = m_points;
      if (m_points > double(m_maxPoints)) {
         ret = -1;
      }
      return ret;
   }
   Mark& Mark::points(double value) {
      m_points = value;
      setGrade();
      return *this;
   }
   int Mark::maxPoints()const {
      return m_maxPoints;
   }
   Mark& Mark::maxPoints(int value) {
      m_maxPoints = value;
      setGrade();
      return *this;
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

  Mark& Mark::displayType(int dType) {
     m_displayType = DSP_MARK;
     if (dType == DSP_GRADE || dType == DSP_GPA) {
        m_displayType = dType;
     }
     return *this;
  }

  std::ostream& Mark::display()const {
     if (!isValid()) {
        std::cout << "INVALID";
     }
     else if (m_displayType == DSP_GRADE) {
        std::cout << grade();
     }
     else if (m_displayType == DSP_GPA) {
        std::cout << std::setprecision(1) << std::fixed << gpa();
     }
     else if (m_displayType == DSP_MARK) {
        std::cout << weightedMark();
     }
     else { // never diplayed unless you did something wrong
        std::cout << "Bad display type for a mark";
     }
     return std::cout;
  }
  Mark::operator double()const {
     return value();
  }

  double operator+(double val, const Mark& M) {
     val += M;
     return val;
  }
}
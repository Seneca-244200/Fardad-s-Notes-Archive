#pragma once
#ifndef SICT_MARK_H_
#define SICT_MARK_H_
#include <iostream>
/* not cool anymore
#define DSP_GRADE  0
#define DSP_GPA 1
#define DSP_MARK 2
*/
namespace sict {
   const int DSP_INVALID = 0;
   const int DSP_GRADE = 1;
   const int DSP_GPA = 2;
   const int DSP_MARK = 3;
   class Mark {
   private:
      char m_grade[3];
      double m_points;
      int m_maxPoints;
      int m_displayType;
      void setGrade();
      void setEmpty();
      void set(int maxPoints, double points);
      double value()const;
   public:


      Mark();
      Mark(double points);
      Mark(int maxPoints, double points);
      
      bool operator>(const Mark& M)const;
      bool operator!()const;

      Mark operator++();
      Mark operator++(int);
      bool operator<(double d)const;

      Mark operator+ (const Mark& M)const;

      const Mark& operator+=(int val);

      operator double()const;



      double points()const;
      Mark& points(double value);
      int maxPoints()const;
      Mark& maxPoints(int value);
      int weightedMark()const;
      double gpa()const;
      const char* grade()const;
      std::ostream& display()const;
      Mark& displayType(int dType);
      bool isValid()const;
      // friend double operator+(double val, const Mark& M); bad, write an accessor instead
   };

   double operator+(double val, const Mark& M);
}







#endif


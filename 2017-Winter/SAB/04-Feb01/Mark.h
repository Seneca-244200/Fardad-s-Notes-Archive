#pragma once
#ifndef SICT_MARK_H_
#define SICT_MARK_H_
/* not cool anymore
#define DSP_GRADE  0
#define DSP_GPA 1
#define DSP_MARK 2
*/
namespace sict {
   const int DSP_GRADE = 0;
   const int DSP_GPA = 1;
   const int DSP_MARK = 2;
   class Mark {
   private:
      char m_grade[3];
      double m_points;
      int m_maxPoints;
      int m_displayType;
      void setGrade();
   public:
      double points()const;
      void points(double value);
      int maxPoints()const;
      void maxPoints(int value);
      int weightedMark()const;
      double gpa()const;
      const char* grade()const;
      void display()const;
      void displayType(int dType);
   };

}







#endif


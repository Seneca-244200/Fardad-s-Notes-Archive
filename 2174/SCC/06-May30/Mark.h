#pragma once
#ifndef SICT_MARK_H__
#define SICT_MARK_H__
/* not cool anymore
#define DSP_GRADE  0
#define DSP_GPA 1
#define DSP_MARK 2
*/
namespace sict{
   const int DSP_GRADE = 0;
   const int DSP_GPA = 1;
   const int DSP_MARK = 2;
   class Mark {
   private:
      char m_grade[3];
      int m_value;
      int m_maxValue;
      int m_displayType;
      // modifier
      void setGrade();
      // queryies
      int weightedMark()const; // const: can not change the
                               // attributes of the class
      double gpa()const;
      const char* grade()const;
   public:
      // modifiers
      void setMaxValue(int maxValue);
      void set(int value);
      void displayType(int theDisplayType);
      // query
      void display()const;
   };
}
#endif


#pragma once
#ifndef SDDS_STUDENT_H_
#define SDDS_STUDENT_H_
#include "Name.h"
namespace sdds {
   class Student {
   private:
      Name m_name;
      int m_stno;
      double m_gpa;
   public:
      Student();
      Student(const char* firstName, const char* lastName, int stno, double gpa);
      void print()const;
      bool isEmpty()const;
   };
}
#endif
#pragma once
#ifndef SDDS_STUDENT_H_
#define SDDS_STUDENT_H_
#include "Name.h"
namespace sdds {
class Student{
   Name m_name;
   /*int m_stno{};
   int m_stno{ 0 };
   int m_stno = { 0 };*/
   int m_stno = 0;
   double m_gpa;
   void setEmpty();
public:
   bool isEmpty()const;
   Student();
   Student(const char* firstName, const char* lastName, int stno, double gpa);
   void print()const;
};





}


#endif // !SDDS_STUDENT_H_



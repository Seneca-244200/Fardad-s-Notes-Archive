#include <iostream>
using namespace std;
#include "Student.h"
namespace sdds {
   Student::Student(){
      m_stno = 0;
      m_gpa = 0.0;
   }
   Student::Student(const char* firstName, const char* lastName, int stno, double gpa){
      m_name.set(firstName, lastName);
      if (!m_name.isEmpty()) {
         m_stno = stno;
         m_gpa = gpa;
      }
   }
}
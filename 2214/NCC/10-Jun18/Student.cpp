#include <iostream>
using namespace std;
#include "Student.h"
namespace sdds {
   void Student::setEmpty() {
      m_stno = 0;
   }
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
      else {
         setEmpty();
      }
   }
   void Student::print() const {
      if (!isEmpty()) {
         m_name.print();
         cout.width(6);
         cout << "Student Number: " << m_stno << endl;
         cout.width(3);
         cout.setf(ios::fixed);
         cout.precision(1);
         cout << "GPA: " << m_gpa << endl;
         cout.unsetf(ios::fixed);
      }
      else {
         cout << "Empty student!" << endl;
      }
   }
   bool Student::isEmpty() const {
      return m_stno == 0 || m_name.isEmpty();
   }
}
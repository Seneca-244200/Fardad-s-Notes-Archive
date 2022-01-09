#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;
namespace sdds {
   void pnrStdTitle() {
      cout << " Name               | St#  |GPA" << endl;
      cout << "--------------------+------+---" << endl;
   }
   void prnStudent(const Student* sp) {
      cout.setf(ios::left);
      cout.width(20);
      cout << sp->m_name;
      cout << "|";
      cout.setf(ios::right);
      cout.unsetf(ios::right);
      cout.width(6);
      cout.fill('0');
      cout << sp->m_stno;
      cout.fill(' ');
      cout << "|";
      cout.width(3);
      cout.setf(ios::fixed);
      cout.precision(1);
      cout << sp->m_gpa;
      cout.fill(' ');
      cout << endl;
   }
   void sortOnName(const Student* stptrs[], const Student sts[], unsigned int size) {
      unsigned int i=0;
      const Student* temp = nullptr;
      for (i = 0; i < size; i++) {
         stptrs[i] = &sts[i];
      }
      for (i = 0; i < size - 1; i++) {
         for (unsigned int j = 0; j < size - i - 1; j++) {
            if (strcmp(stptrs[j]->m_name, stptrs[j + 1]->m_name)>0) {
               temp = stptrs[j];
               stptrs[j] = stptrs[j + 1];
               stptrs[j + 1] = temp;
            }
         }
      }
   }
   void sortOnStno(const Student* stptrs[], const Student sts[], unsigned int size) {
      unsigned int i = 0;
      const Student* temp = nullptr;
      for (i = 0; i < size; i++) {
         stptrs[i] = &sts[i];
      }
      for (i = 0; i < size - 1; i++) {
         for (unsigned int j = 0; j < size - i - 1; j++) {
            if (stptrs[j]->m_stno > stptrs[j + 1]->m_stno) {
               temp = stptrs[j];
               stptrs[j] = stptrs[j + 1];
               stptrs[j + 1] = temp;
            }
         }
      }
   }
   void sortOnGpa(const Student* stptrs[], const Student sts[], unsigned int size) {
      unsigned int i = 0;
      const Student* temp = nullptr;
      for (i = 0; i < size; i++) {
         stptrs[i] = &sts[i];
      }
      for (i = 0; i < size - 1; i++) {
         for (unsigned int j = 0; j < size - i - 1; j++) {
            if (stptrs[j]->m_gpa > stptrs[j + 1]->m_gpa) {
               temp = stptrs[j];
               stptrs[j] = stptrs[j + 1];
               stptrs[j + 1] = temp;
            }
         }
      }
   }
}
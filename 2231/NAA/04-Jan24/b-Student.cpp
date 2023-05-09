#define _CRT_SECURE_NO_WARNINGS
#include "b-Student.h"
#include <iostream>
#include <cstring>
using namespace std;
namespace sdds {
   void Student::set() {
      char name[51]{};
      unsigned int stno{};
      cout << "Name: ";
 //    cin >> name;
      cin.getline(name, 51);
      cout << "Student number: ";
      cin >> stno;
      set(name, stno);
   }

   void Student::set(const char name[], 
      unsigned int stno) {
      strncpy(m_name, name, 50);
      m_name[50] = 0;
      m_stno = stno;
   }
   void Student::display()const {
      cout << "Name: " << m_name << ", "
         << "Student number: " << m_stno << endl;
   } 





}

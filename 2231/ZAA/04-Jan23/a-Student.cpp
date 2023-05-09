#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "a-Student.h"

using namespace std;
namespace sdds {
   void Student::set(const char* name,
         unsigned int stno) {
      strncpy(m_name, name, 50);
      m_name[50] = 0;// makes sure if name hits 50, the targer (m_name) is null teminated
      m_stno = stno;
   }
   void Student::show() const   {
      cout << "Name: " << m_name 
           << ", Student No: " << m_stno 
           << endl;
   }
   void Student::set() {
      unsigned stno;
      char name[51];
      cout << "Name: ";
      //cin >> name;
      cin.getline(name, 51);
      cout << "Student No: ";
      cin >> stno;
      set(name, stno);
   }
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Student.h"
namespace sdds {

   void Student::set(const char name[], int age) {
      strcpy(m_name, name);
      m_age = age;
   }
   void Student::print() {
      cout << m_name << endl;
      cout << m_age << endl;
   }



}
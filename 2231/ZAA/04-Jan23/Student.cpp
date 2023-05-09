#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;
namespace sdds {
   Student::Student() {
      m_name = nullptr;
      m_stno = 0;
   }
   Student::~Student() {
      deallocate();
   }
   void Student::set(const char* name,
         unsigned int stno) {
      if (m_name != nullptr) {
         deallocate();
      }
      m_name = new char[strlen(name)+1];
      strcpy(m_name, name);
      m_stno = stno;
   }
   void Student::show() const   {
      if (m_name) {
         cout << "Name: " << m_name
            << ", Student No: " << m_stno
            << endl;
      }
      else {
         cout << "This object in invalid!" << endl;
      }
   }
   void Student::deallocate(){
      delete[] m_name;
      m_name = nullptr; // flag it to empty
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

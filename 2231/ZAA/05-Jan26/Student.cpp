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
   void Student::set(const char* name,   unsigned int stno) {
      deallocate();
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
   bool Student::set() {
      bool success = true;
      unsigned stno{};
      char name[21];
      cout << "Name: ";
      //cin >> name;
      cin.getline(name, 21);
      if(cin.fail()) {
         cout << "The name is too long" << endl;
         success = false;
         deallocate(); // to put the student in a recongnizable empty state.
      }
      else {
         cout << "Student No: ";
         cin >> stno;
         set(name, stno);
      }
      return success;
   }
}

#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
namespace sdds {
   void Student::init(){
      m_name = nullptr;
      m_stno = 0;
   }
   Student::Student() {
      init();
   }
   Student::~Student() {
      deallocate();
   }
   void Student::set() {
      bool done = true;
      char name[51]{};
      unsigned int stno{};
      cout << "Name: ";
 //    cin >> name;
      do {
         done = true;
         cin.getline(name, 51);
         if (cin.fail()) {
            cin.clear();
            cin.ignore(11111, '\n');
            cout << "Too long, shorten the name\n> ";
            done = false;
         }
      } while (!done);
      cout << "Student number: ";
      cin >> stno;
      cin.ignore(11111, '\n');
      set(name, stno);
   }

   void Student::set(const char name[], 
      unsigned int stno) {
      deallocate(); // prevent memory leak
      m_name = new char[strlen(name)+1];
      strcpy(m_name, name);
      m_stno = stno;
   }
   void Student::display()const {
      if (m_name) {
         cout << "Name: " << m_name << ", "
            << "Student number: " << m_stno << endl;
      }
      else {
         cout << "The name in invalid" << endl;
      }
   }
   void Student::deallocate(){
      delete[] m_name;
   }






}

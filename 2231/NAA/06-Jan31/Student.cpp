#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Student.h"
#include "Utils.h"

using namespace std;
namespace sdds {
   void Student::init(){
      m_name = nullptr;
      m_stno = 0;
   }
   Student::Student(unsigned int stno) {
      init();
      set("No Name", stno);
   }
   Student::Student(const char* name) {
      init(); // make everything clean to start
      set(name);
   }
   Student::Student(const char* name, unsigned int stno) {
      init(); // make everything clean to start
      set(name, stno);
   }
   Student::Student() {
      init();
   }
   Student::~Student() {
      deallocate();
   }
   Student& Student::set() {
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
      stno = U.getInt(9999, 100000, "Student number: ");
      cin.ignore(11111, '\n');
      set(name, stno);
      return *this;
   }

   Student& Student::set(const char name[], unsigned int m_stno) {
      deallocate(); // prevent memory leak
      m_name = new char[strlen(name)+1];
      strcpy(m_name, name);
      // very bad thing to do, always use a different name for argument.
      this->m_stno = m_stno;
      return *this;
   }
   ostream& Student::display()const {
      if (m_name) {
         cout << "Name: " << m_name;
         if (m_stno) {
            cout << ", "
               << "Student number: " << m_stno;
         }
         else {
            cout << "(Not Registered)";
         }
      }
      else {
         cout << "The name in invalid";
      }
      return cout;
   }
   void Student::deallocate(){
      delete[] m_name;
      m_name = nullptr;
   }






}

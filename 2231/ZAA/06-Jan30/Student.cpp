#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;
namespace sdds {
   Student::Student(unsigned int stno) {
      setEmpty();
      set("No Name", stno);
   }
   Student::Student(const char* name) {
     // m_name = nullptr; // prepare for set function
      setEmpty();
      set(name);
   }
   Student::Student(const char* name, unsigned stno){
      setEmpty();
      set(name, stno);
   }
   Student::Student() {
      setEmpty();
   }
   Student::~Student() {
      deallocate();
   }
   Student& Student::set(const char* m_name,   unsigned int stno) {
      deallocate();
      this->m_name = new char[strlen(m_name)+1]; // never do what I did here with this
      strcpy(this->m_name, m_name);              // it is for EXAMPLE ONLY
      m_stno = stno;
      return *this; // do this all the time, but not the above ones
   }
   ostream& Student::show() const   {
      if (!isEmpty()) {
         cout << "Name: " << m_name
            << ", Student No: " << m_stno;
      }
      else {
         cout << "This object in invalid!";
      }
      return cout;
   }
   bool Student::isEmpty() const {
      return m_name == nullptr;
   }
   void Student::setEmpty() {
      m_name = nullptr;
      m_stno = 0;
   }
   void Student::deallocate(){
      delete[] m_name;
      setEmpty();
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

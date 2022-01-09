#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Marks.h"
using namespace std;
void display() {
   cout << "Statistical Application for marks" << endl;
}

namespace sdds {

   void Marks::display()const {
   //   ::display(); call to a global funciton 
      if (!inSafeEmpty()) {
         cout << endl << ">>>  " << m_title << "  <<<" << endl;
         for (int i = 0; i < m_noOfValues; i++) {
            cout << (i + 1) << "> " << m_values[i] << endl;
         }
         //noOfMarks++;   can not change the owner since it is a const method (member function)
         cout << ">>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<" << endl;
      }
      else {
         cout << "This object is in an invalid state!" << endl;
      }
   }
   bool Marks::inSafeEmpty()const {
      return (m_title[0] == 0);
   }

   //Setters, Modifiers or Mutators
   // this function is supposed to be called only once after creation of the object
   void Marks::init(const char* title, const double values[], int noOfMarks) {
      strcpy(m_title, title);
      for (int i = 0; i < noOfMarks; i++) {
         m_values[i] = values[i];
      }
      m_noOfValues = noOfMarks;
   }
   void Marks::init() {
      m_title[0] = 0;// makes the title an empty Cstring
      m_noOfValues = 0;
   }
   void Marks::set(const char* title) {
      strcpy(m_title, title);
   }
   bool Marks::add(double mark) {
      bool res = false;
      if (m_noOfValues < MaxNoOfValues) {
         m_values[m_noOfValues] = mark;
         m_noOfValues++;
         res = true;
      }
      return res;
   }
}

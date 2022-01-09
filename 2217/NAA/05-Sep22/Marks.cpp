#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;

#include "Marks.h"
namespace sdds {
   bool Marks::inSafeEmpty()const {
      return (m_title[0] == 0);
   }
   void Marks::init() {  // safe empty state
      m_title[0] = 0;
      m_NoOfValues = 0;
   }
   void Marks::set(const char* title) {
      strcpy(m_title, title);
      m_NoOfValues = 0;
   }
   void Marks::init(const char* title, const double values[], int NoOfValues) {
      strcpy(m_title, title);
      m_NoOfValues = 0;
      for (int i = 0; i < NoOfValues; i++) {
         add(values[i]);
      }
   }
   void Marks::display()const { // this method (member function) can not change its owner
      // ::display(); call to a global display function outside of class
      if (!inSafeEmpty()) {
         cout << "*** " << m_title << " ***" << endl;
         for (int i = 0; i < m_NoOfValues; i++) {
            cout << (i + 1) << ": " << m_values[i] << endl;
            // NoOfValues = 100; will cause error since display is const
         }
      }
      else {
         cout << "This object is not set yet!" << endl;
      }
   }
   bool Marks::add(double mark) {
      bool res = false;
      if (m_NoOfValues < NOM) {
         m_values[m_NoOfValues] = mark;
         m_NoOfValues++;
         res = true;
      }
      return res;
   }



  

}

void display() {
   cout << "The Marks program!" << endl;
}
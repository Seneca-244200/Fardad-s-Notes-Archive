#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
#include "Marks.h"
namespace sdds {
   void Marks::display()const {
      if (!inSafeEmpty()) {
         cout << "*** " << m_title << " ***" << endl;
         for (int i = 0; i < m_noOfValues; i++) {
            cout << (i + 1) << "- " << m_values[i] << endl;
         }
         //m_noOfValues = 100; cannot do since display is constant
         cout << "**********************************************" << endl;
      }
      else {
         cout << "This object is in an invalid state!" << endl;
      }
   }
   bool Marks::inSafeEmpty()const {
      /*
      bool res = false;
      if (m_title[0] == 0) {
         res = true;
      }
      return res;
      */
      return (m_title[0] == 0);
   }

   // Setters, Modifiers, Mutators
   // must be called only once after the object is created;
   void Marks::init() {
      m_title[0] = 0;
      m_noOfValues = 0;
   }

   void Marks::init(const char* title, const double values[], int NoOfValues) {
      set(title);
      for (int i = 0; i < NoOfValues; i++) {
         m_values[i] = values[i];
      }
      m_noOfValues = NoOfValues;
   }
   void Marks::set(const char* title) {
      strcpy(m_title, title);
   }
   bool Marks::add(double mark) {
      bool res = false;
      if (!inSafeEmpty() && m_noOfValues < MaxNoMarks) {
         m_values[m_noOfValues] = mark;
         m_noOfValues++;
         res = true;
      }
      return res;
   }


}
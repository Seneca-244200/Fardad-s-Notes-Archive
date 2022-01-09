#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
#include "DynMarks.h"
namespace sdds {
   void DynMarks::display()const {  
      if (!inSafeEmpty()) {
         cout << "*** " << m_title << " ***" << endl;
         for (int i = 0; i < m_noOfValues; i++) {
            cout << (i + 1) << "- " << m_values[i] << endl;
         }
         cout << "**********************************************" << endl;
      }
      else {
         cout << "This object is in an invalid state!" << endl;
      }
   }
   bool DynMarks::inSafeEmpty()const {
      return (m_title == nullptr || m_values == nullptr);
   }

   // Setters, Modifiers, Mutators
   // must be called only once after the object is created;
   void DynMarks::init() {
      m_title = nullptr;
      m_values = nullptr;
      m_noOfValues = 0;
   }
   
   // must be called only once after the object is created;
   void DynMarks::init(const char* title, const double values[], int NoOfValues) {
      m_title = nullptr;
      set(title);
      m_values = new double[NoOfValues]; // DMA
      for (int i = 0; i < NoOfValues; i++) {
         m_values[i] = values[i];
      }
      m_noOfValues = NoOfValues;
   }

   void DynMarks::set(const char* title) {
      delete[] m_title;
      m_title = new char[strlen(title) + 1];// for Ctrings alway we need an extra byte
      strcpy(m_title, title);
   }

   bool DynMarks::add(double mark) {
      bool res = false;
      if (!inSafeEmpty()) {
         double* temp = new double[m_noOfValues + 1];
         for (int i = 0; i < m_noOfValues; i++) {
            temp[i] = m_values[1];
         }
         temp[m_noOfValues] = mark;
         delete[] m_values;
         m_values = temp;
         m_noOfValues++;
         res = true;
      }
      return res;
   }

   void DynMarks::cleanUp() {
      delete[] m_title;
      delete[] m_values;
      m_title = nullptr;
      m_values = nullptr;
      m_noOfValues = 0;
   }


}
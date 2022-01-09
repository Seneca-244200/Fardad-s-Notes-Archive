#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;

#include "DynMarks.h"
namespace sdds {
   bool DynMarks::inSafeEmpty()const {
      return (m_title == nullptr);
   }
   void DynMarks::init() {  // safe empty state
      m_title = nullptr;
      m_values = nullptr;
      m_NoOfValues = 0;
   }
   void DynMarks::set(const char* title) {
      delete[] m_title; // prevents memory leak
      m_title = new char[strlen(title) + 1]; // exact size of title plus one for the null termination
      if (m_title != nullptr) { // memory is ok
         strcpy(m_title, title);
        /* delete[] m_values;  hidden logic bad in init
         m_values = nullptr;
         m_NoOfValues = 0;*/
      }
      else {
         delete[] m_values;  // going to safe empty state
         m_values = nullptr;
         init();
      }
   }
   void DynMarks::init(const char* title, const double values[], int NoOfValues) {
      init();
      m_values = new double[NoOfValues];
      if (m_values != nullptr) { // we have enough memroy
         set(title);
         for (int i = 0; i < NoOfValues; i++) {
            //         add(values[i]);
            m_values[i] = values[i];
         }
         m_NoOfValues = NoOfValues;
      }
   }
   void DynMarks::display()const { // this method (member function) can not change its owner
      if (!inSafeEmpty()) {
         cout << "*** " << m_title << " ***" << endl;
         for (int i = 0; i < m_NoOfValues; i++) {
            cout << (i + 1) << ": " << m_values[i] << endl;
         }
      }
      else {
         cout << "This object is not set yet!" << endl;
      }
   }
   void DynMarks::deallocateMem() {
      delete[] m_title;
      delete[] m_values;
      m_NoOfValues = 0;
      m_title = nullptr;
      m_values = nullptr;
   }
   bool DynMarks::add(double mark) {
      bool res = false;
      double* temp = new double[m_NoOfValues + 1];
      if (temp != nullptr) {
         for (int i = 0; i < m_NoOfValues; i++) {
            temp[i] = m_values[i];
         }
         delete[] m_values;
         m_values = temp;
         m_values[m_NoOfValues] = mark;
         m_NoOfValues++;
         res = true;
      }
      return res;
   }



  

}

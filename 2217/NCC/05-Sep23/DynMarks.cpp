#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "DynMarks.h"
using namespace std;
namespace sdds {

   void DynMarks::display()const {
      if (!inSafeEmpty()) {
         cout << endl << ">>>  " << m_title << "  <<<" << endl;
         for (int i = 0; i < m_noOfValues; i++) {
            cout << (i + 1) << "> " << m_values[i] << endl;
         }
         cout << ">>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<" << endl;
      }
      else {
         cout << "This object is in an invalid state!" << endl;
      }
   }
   bool DynMarks::inSafeEmpty()const {
      return (m_title == nullptr || m_values == nullptr);
   }

   void DynMarks::init(const char* title, const double values[], int noOfMarks) {
      m_values = nullptr;
      m_title = nullptr;
      set(title);
      m_values = new double[noOfMarks]; // DMA
      if (m_values != nullptr) {
         for (int i = 0; i < noOfMarks; i++) {
            m_values[i] = values[i];
         }
         m_noOfValues = noOfMarks;
      }
      else { // not enough memroy set to safe empty state
         delete[] m_title;
         m_title = nullptr;
         m_values = nullptr;
      }
   }
   void DynMarks::init() {
      m_values = nullptr;
      m_title = nullptr;
      m_noOfValues = 0;
   }
   void DynMarks::set(const char* title) {
      delete[] m_title;                      // DMA
      m_title = new char[strlen(title) + 1]; // DMA
      if (m_title != nullptr) {
         strcpy(m_title, title);
      }
      else {
         delete[] m_values;
         m_values = nullptr;
         m_title = nullptr;
      }
   }
   bool DynMarks::add(double mark) {
      bool res = false;
      double* temp = new double[m_noOfValues + 1];
      if (temp != nullptr) {
         for (int i = 0; i < m_noOfValues; i++) {
            temp[i] = m_values[i];
         }
         temp[m_noOfValues] = mark;
         delete[] m_values; // this was missed and I added later
         m_values = temp;
         m_noOfValues++;
         res = true;
      }
      return res;
   }

   void DynMarks::cleanUp() {
      delete[] m_title;
      delete[] m_values;
      m_noOfValues = 0;
   }
}

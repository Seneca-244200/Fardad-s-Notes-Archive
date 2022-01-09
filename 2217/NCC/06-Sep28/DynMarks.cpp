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
      return (m_title == nullptr);
   }
   void DynMarks::setSafeEmpty() {
      m_title = nullptr;
      m_values = nullptr;
      m_noOfValues = 0;
   }
   DynMarks::DynMarks(const char* title) :m_title(nullptr), m_values(nullptr), m_noOfValues(0){
      set(title);
   }
   DynMarks::DynMarks(const char* title, const double values[], int noOfMarks):DynMarks(title){
      //DynMarks();// creates a temprary nameless object and will live only in this line
                 // and will die right after the the line over
      /* do not need these since DynMarks(title) constructor in invokedn in initialization area
      setSafeEmpty();
      set(title);*/
      m_values = new double[noOfMarks]; // DMA
      if (m_values != nullptr) {
         for (int i = 0; i < noOfMarks; i++) {
            m_values[i] = values[i];
         }
         m_noOfValues = noOfMarks;
      }
      else { // not enough memroy set to safe empty state
         delete[] m_title;
         setSafeEmpty();
      }
   }
   DynMarks::DynMarks()/*init area*/ { // no argurment or default constructor
      setSafeEmpty();
      m_noOfValues = -123;
   }
   DynMarks& DynMarks::set(const char* m_title) {
      delete[] this->m_title;                      // DMA
      (*this).m_title = new char[strlen(m_title) + 1]; // DMA
      if (this->m_title != nullptr) {
         strcpy(this->m_title, m_title);
      }
      else {
         delete[] m_values;
         setSafeEmpty();
      }
      return *this;
   }
   DynMarks& DynMarks::add(double mark) {
      double* temp = new double[m_noOfValues + 1];
      if (temp != nullptr) {
         for (int i = 0; i < m_noOfValues; i++) {
            temp[i] = m_values[i];
         }
         temp[m_noOfValues] = mark;
         delete[] m_values;
         m_values = temp;
         m_noOfValues++;
      }
      else {
         delete[] m_title;
         delete[] m_values;
         setSafeEmpty();
      }
      return *this;
   }

   DynMarks::~DynMarks() {
      delete[] m_title;
      delete[] m_values;
      setSafeEmpty();
   }
}

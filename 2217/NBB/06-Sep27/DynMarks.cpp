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
      return (m_title == nullptr);
   }

   void DynMarks::setSafeEmpty() {
      m_title = nullptr;
      m_values = nullptr;
      m_noOfValues = 0;
   }

   // Setters, Modifiers, Mutators
   // must be called only once after the object is created;
   DynMarks::DynMarks() {
      setSafeEmpty();
   }

   DynMarks::DynMarks(const char* title)
       :m_title(nullptr),m_values(nullptr),m_noOfValues(0){
      //setSafeEmpty();
      // YOU CAN NOT CALL A CONSTRUCTOR
      //DynMarks();// Temproray nameless DynMarks was created 
                 // and will die right after the line it was
                 // invoked in
      // DO NOT USE THIS unless you REALLY know what you are doing
      //*this = DynMarks();

      set(title);
   }
   
   // must be called only once after the object is created;
   DynMarks::DynMarks(const char* title, const double values[], int NoOfValues):DynMarks(title) {// to invoke the help of another constructor to build the object
      m_values = new double[NoOfValues]; // DMA
      for (int i = 0; i < NoOfValues; i++) {
         m_values[i] = values[i];
      }
      m_noOfValues = NoOfValues;
   }

   DynMarks& DynMarks::set(const char* m_title) {
      delete[] this->m_title;
      (*this).m_title = new char[strlen(m_title) + 1];// for Ctrings alway we need an extra byte
      strcpy(this->m_title, m_title);
      return *this;
   }

   DynMarks& DynMarks::add(double mark) {
      if (!inSafeEmpty()) {
         double* temp = new double[m_noOfValues + 1];
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
      /* No need anymore because all of them are about to die and ther value 
      * is irrelevent
      m_title = nullptr;
      m_values = nullptr;*/
      m_noOfValues = 0;
     
   }


}
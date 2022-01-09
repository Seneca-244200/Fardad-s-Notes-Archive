#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;

#include "DynMarks.h"
namespace sdds {
   bool DynMarks::inSafeEmpty()const {
      return (m_title == nullptr);
   }
   DynMarks::DynMarks() {  // safe empty state
      setEmpty();
   }
   //DynMarks::DynMarks(const char* title) :m_NoOfValues(0),m_title(nullptr),m_values(nullptr) {
   //   //DynMarks(); // create a temproary nameless Dynamic marks with no argument and dies immidiatley after
   //   // therefor it can not be called
   //   // setEmpty(); I am using this since the initializers are used
   //   set(title);
   //}
   DynMarks::DynMarks(const char* title){
      *this = DynMarks(); // DO NOT DO THIS unless you know what you are doing!!!!
      set(title);
   }
   DynMarks::DynMarks(const char* title, const double values[], int NoOfValues):DynMarks(title){
      //setEmpty();
      m_values = new double[NoOfValues];
      if (m_values != nullptr) { // we have enough memroy
        // set(title);
         for (int i = 0; i < NoOfValues; i++) {
            //         add(values[i]);
            m_values[i] = values[i];
         }
         m_NoOfValues = NoOfValues;
      }
   }
   void DynMarks::set(const char* m_title) {
      delete[] this->m_title; // prevents memory leak
      (*this).m_title = new char[strlen(m_title) + 1]; // exact size of title plus one for the null termination
      if (this->m_title != nullptr) { // memory is ok
         strcpy(this->m_title, m_title);
      }
      else {
         delete[] m_values;  // going to safe empty state
         m_values = nullptr;
         setEmpty();
      }
   }

   void DynMarks::setEmpty() {
      m_title = nullptr;
      m_values = nullptr;
      m_NoOfValues = 0;
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
   DynMarks::~DynMarks() {
      delete[] m_title;
      delete[] m_values;
      /* No need in destructors, since the object is dead and gone after this
      * and there is no need to set any value to anything since they are about
      * to die with thier object.
      m_NoOfValues = 0;
      m_title = nullptr;
      m_values = nullptr; */
   }
   DynMarks&  DynMarks::add(double mark) {
      double* temp = new double[m_NoOfValues + 1];
      if (temp != nullptr) {
         for (int i = 0; i < m_NoOfValues; i++) {
            temp[i] = m_values[i];
         }
         delete[] m_values;
         m_values = temp;
         m_values[m_NoOfValues] = mark;
         m_NoOfValues++;
      }
      else {
         delete[] m_title;
         delete[] m_values;
         setEmpty();
      }
      return *this;
   }



  

}

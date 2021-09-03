#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace sdds {
   bool debug = false;
   Name::Name() {
      init();
      if (debug) cout << "Defaulting name!" << endl;
   }
   Name::Name(const char* firstAndLast){
      init();
      set(firstAndLast, firstAndLast);
      if (debug) {
         cout << "Creating "; 
         print();
      }
   }
   Name::Name(const char* firstName, const char* lastName){
      init();
      set(firstName, lastName);
  //    int i;
      if (debug) {
  //       int i;
         cout << "Creating ";
         print();
      }
   }
   Name::~Name() {
      if (debug) {
         cout << "Removing ";
         print();
      }

      deleteMem();
   }
   void Name::init(){
      m_first = nullptr;
      m_last = nullptr;
   }
  // this always "ALWAYA" carry the "address" of the
   // currect structur or class
   Name& Name::set(const char* m_first, 
                     const char* m_last) {
      delete[] this->m_first;
      delete[] this->m_last;
      //this is bad practice like this in code
      // but good example for meaning of "this"
      if (m_first && m_last) {
         this->m_first = new char[strlen(m_first) + 1];
         strcpy(this->m_first, m_first);
         this->m_last = new char[strlen(m_last) + 1];
         strcpy(this->m_last, m_last);
      }
      else {
         this->m_first = this->m_last = nullptr;
      }
      return *this;
   }
   const char* Name::first() const{
      return m_first;
   }
   const char* Name::last() const{
      return m_last;
   }
   ostream& Name::print()const {
      if (m_first  && m_last ) { 
         std::cout << m_first << " " << m_last;
      }
      else {
         cout << "Empty!";
      }
      return cout;
   }

   bool Name::isEmpty() const   {
      return m_first == nullptr || m_last== nullptr;
   }

   void Name::deleteMem(){
      delete[] m_first;
      delete[] m_last;
      m_first = m_last = nullptr;
   }




}

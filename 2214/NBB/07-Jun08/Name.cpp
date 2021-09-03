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
      /*Name(); you CAN NOT CALL A CONSTRUCTOR
      Name(firstAndLast, firstAndLast);*/
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
      if (debug) {
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
   void Name::init(){// is only called when the object is just create
      m_first = nullptr;
      m_last = nullptr;
   }
  
   void Name::set(const char* fn, const char* ln) {
      delete[] m_first;// will not do anything of m_first
      delete[] m_last;
      if (fn && ln) {
         m_first = new char[strlen(fn) + 1];
         strcpy(m_first, fn);
         m_last = new char[strlen(ln) + 1];
         strcpy(m_last, ln);
      }
      else {
         m_first = m_last = nullptr;
      }
   }
   const char* Name::first() const{
      return m_first;
   }
   const char* Name::last() const{
      return m_last;
   }
   void Name::print()const {
      if (m_first  && m_last ) { // Name is not in a safe empty state
         std::cout << m_first << " " << m_last << std::endl;
      }
      else {
         cout << "Empty!" << endl;
      }
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

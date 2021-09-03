#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace sdds {
   void Name::init(){// is only called when the object is just create
      m_first = nullptr;
      m_last = nullptr;
   }
   //void Name::set(const char* fn, const char* ln) {  // non Dynamic
   //   strncpy(m_first, fn, 20);
   //   m_first[20] = 0;
   //   strncpy(m_last, ln, 40);
   //   m_last[40] = 0;
   //}
   void Name::set(const char* fn, const char* ln) {
      delete[] m_first;
      delete[] m_last;
      m_first = new char[strlen(fn) + 1];
      strcpy(m_first, fn);
      m_last = new char[strlen(ln) + 1];
      strcpy(m_last, ln);
   }
   void Name::print() {
     // if (m_first != nullptr && m_last != nullptr) {
      if (m_first  && m_last ) { // Name is not in a safe empty state
         std::cout << m_first << " " << m_last << std::endl;
      }
      else {
         cout << "Empty!" << endl;
      }
   }

   void Name::deleteMem(){
      delete[] m_first;
      if(m_first) // there is no need for this, since delete already does this
         delete[] m_last;
      m_first = m_last = nullptr;
   }




}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
void print() {
   cout << "File/Global scope print!" << endl;
}
namespace sdds {

   void print() {
      cout << "SDDS scoped print!" << endl;
   }

   void Name::init() {
      m_first = nullptr;
      m_last = nullptr;
   }
   void Name::set(const char* fn, const char* ln) {
      delete[] m_first;
      m_first = new char[strlen(fn) + 1];   //what happens if I do this:  m_frist = new char[strlen(fn+1)];
      delete[] m_last;
      m_last = new char[strlen(ln) + 1];
      strcpy(m_first, fn);
      strcpy(m_last, ln);
   }
   void Name::print()const {
      if (!isEmpty()) {
         cout << m_first << " " << m_last << endl;
      }
      else {
         cout << "Empty!" << endl;
      }
      sdds::print();
      ::print();
   }
   bool Name::isEmpty() const {
      return m_first == nullptr || m_last == nullptr;
   }
   void Name::deleteMem() {
      delete[] m_first;
      delete[] m_last;
   }
}

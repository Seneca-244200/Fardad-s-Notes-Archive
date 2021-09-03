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
   Name::Name(const char* nm) {
      init();
      set(nm, nm);
      if (debug) {
         cout << "Creating ";
         print();
      }
   }
   Name::Name(const char* fn, const char* ln) {
      init();
      set(fn, ln);
      if (debug) {
         cout << "Creating ";
         print();
      }
   }
   Name::~Name() {
      if (debug) {
         cout << "Delete ";
         print();
      }
      deleteMem();
   }
   void Name::init() {
      m_first = nullptr;
      m_last = nullptr;
   }
   void Name::set(const char* fn, const char* ln) {
      deleteMem();
      if (fn != nullptr && ln != nullptr) {
         m_first = new char[strlen(fn) + 1];   //what happens if I do this:  m_frist = new char[strlen(fn+1)];
         m_last = new char[strlen(ln) + 1];
         strcpy(m_first, fn);
         strcpy(m_last, ln);
      }
   }
   void Name::print()const {
      if (!isEmpty()) {
         cout << m_first << " " << m_last << endl;
      }
      else {
         cout << "Empty!" << endl;
      }
   }
   bool Name::isEmpty() const {
      return m_first == nullptr || m_last == nullptr;
   }
   void Name::deleteMem() {
      delete[] m_first;
      delete[] m_last;
      m_first = nullptr;
      m_last = nullptr;
   }
}

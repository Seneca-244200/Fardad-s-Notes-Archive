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
 //     int i;
      if (debug) {
  //       int i;
         cout << "Delete ";
         print();
      }
      deleteMem();
   }
   Name& Name::init() {
      m_first = nullptr;
      m_last = nullptr;
      return *this;
   }
   Name& Name::set(const char* m_first, const char* m_last) {
      deleteMem();
      if (m_first != nullptr && m_last != nullptr) {
         this->m_first = new char[strlen(m_first) + 1];  
         // bad practice, good example for teaching
         this->m_last = new char[strlen(m_last) + 1];
         strcpy(this->m_first, m_first);
         strcpy(this->m_last, m_last);

         // "this" is always ALLWAYS address of the currect structure or class
      }
      return *this;// the current object's reference 
   }
   const Name& Name::print()const {
      if (!isEmpty()) {
         cout << m_first << " " << m_last << endl;
      }
      else {
         cout << "Empty!" << endl;
      }
      return *this;
   }
   bool Name::isEmpty() const {
      return m_first == nullptr || m_last == nullptr;
   }
   Name& Name::deleteMem() {
      delete[] m_first;
      delete[] m_last;
      m_first = nullptr;
      m_last = nullptr;
      return *this;
   }
}

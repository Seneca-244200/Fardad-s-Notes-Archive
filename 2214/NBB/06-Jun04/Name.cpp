#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace sdds {
   void Name::init()
   {
      m_first = m_last = nullptr;
   }
   void Name::set(const char* firstName,
                      const char* lastName){
      delete[] m_first;
      delete[] m_last;
      m_first = new char[strlen(firstName)+1];        // what happens if I do this by mistake: m_first = new char[strlen(firstName+1)];
      strcpy(m_first, firstName);
      m_last = new char[strlen(lastName) + 1];
      strcpy(m_last, lastName);
   }
   void Name::print(){
      if (m_first && m_first) {
         cout << m_first << " " << m_last << endl;
      }
      else {
         cout << "Emtpy!" << endl;
      }
   }
   void Name::deleteMem(){
      delete[] m_first;
      delete[] m_last;
      m_first = m_last = nullptr;
   }
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace sdds {
   void Name::set(const char* firstName, 
                      const char* lastName){
      strncpy(m_first, firstName, 20);
      m_first[20] = '\0' ;
      strncpy(m_last, lastName, 40);
      m_last[40] = 0;// Fardad being lazy
   }
   void Name::print(){
      cout << m_first << " " << m_last << endl;
   }
}

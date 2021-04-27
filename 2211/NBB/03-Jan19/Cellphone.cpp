#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Cellphone.h"
using namespace std;
namespace sdds {
   void displayCellphone(const Cellphone* cph) {
      cout << (cph->m_isSmart ? "Smart " : "") << cph->m_brand << 
                              " (" << cph->m_model << ") " << endl;
   }
   void setCellphone(Cellphone* cph, 
                     const char* brand, const char* model, bool isSmart) {
      strncpy(cph->m_brand, brand, 20);
      cph->m_brand[20] = 0;
      strncpy(cph->m_model, model, 15);
      cph->m_model[15] = 0;
      cph->m_isSmart = isSmart;
   }
}
// only include header file where thier functions or objects are used


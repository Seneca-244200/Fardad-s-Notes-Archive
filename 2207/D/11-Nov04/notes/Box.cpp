#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Box.h"
Box::Box(const char* label, char& fill) :
   m_width(10),m_fill(fill) {

   strcpy(m_label, label);
}
//Box::Box(const char* label, int hieght, int width)             {
//   m_hieght = hieght;
//   m_width = width;
//   strcpy(m_label, label);
//}

ostream& Box::display(ostream& os) const {
   int i;
   os << m_label << endl;
   for (int j = 0; j < m_hieght; j++) {
      for (i = 0; i < m_width * 2; i++, os << m_fill);
      os << endl;
   }
   return os;
}

Box::~Box() {
   cout << m_label << " is going out of scope!" << endl;
}


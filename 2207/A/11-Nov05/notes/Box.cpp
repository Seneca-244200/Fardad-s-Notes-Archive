#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Box.h"
Box::Box():m_width(10) {}
Box::Box(const char* label, char& fill):m_width(10), m_fill(fill) {
//   m_width = 10;
//   m_hieght = 5;
   strcpy(m_label, label);
}

Box::Box(const char* label, int hieght, int width, char& fill)
              :m_hieght(hieght),m_width(width), m_fill(fill) {
   //m_hieght = hieght;
   //m_width = width;
   strcpy(m_label, label);
}

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

std::ostream& operator<<(std::ostream& os, const Box& B) {
   return B.display(os);
}

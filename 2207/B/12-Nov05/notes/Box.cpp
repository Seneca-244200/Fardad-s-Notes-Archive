#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Box.h"

Box::Box(){
 //  m_label[0] = 0;
 //  m_width = 5;
 //  m_height = 5;
}

Box::Box(const char* label):m_width(10){
//   m_height = 5;
//   m_width = 10;
   strcpy(m_label, label);
}

Box::Box(const char* label, int hieght, int width) :m_height(hieght), m_width{ width } {
   //m_height = hieght;
   //m_width = width;
   strcpy(m_label, label);
}

std::ostream& Box::display(std::ostream& os) const {
   int i;
   os << m_label << endl;
   for (int j = 0; j < m_height; j++) {
      for (i = 0; i < m_width * 2; i++, os << '*');
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

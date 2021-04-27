#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Box.h"
namespace sdds {

   Label::Label(const char* value) {
      strcpy(m_label, value);
   }
   Label::operator const char* ()const {
      return m_label;
   }
   Label::operator char* () {
      return m_label;
   }

   Box::Box(){}

   Box::Box(const char* label, char fill) 
      :m_label(label),m_fill(fill), m_hieght(5), m_width{ 10 } {}

   Box::Box(const char* label, int hieght, int width, char fill)
      :m_label(label),m_fill(fill),m_hieght(hieght), m_width(width) {}



   std::ostream& Box::display(std::ostream& os) const {
      int i;
      os << (const char*)m_label << endl;
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
}

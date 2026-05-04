#include <iostream>
#include "cstr.h"
using namespace std;
using namespace seneca;
class Line {
   size_t m_len;
   int correctLenValue(size_t len) {
      if (len > 70) len = 70;
      return len;
   }
public:
   Line() :m_len(0) {};
   Line(size_t len) :m_len(correctLenValue(len)) {};
   Line& operator=(size_t len) {
      m_len = correctLenValue(len);
      return *this;
   }
   void draw()const {
      for (size_t i = 0; i < m_len; cout << "-", i++);
      //for (size_t i = 0; i < m_len; i++) {
      //   cout << "-";
      //}
      cout << endl;
   }
};
class Bar :public Line {
   char m_title[31];
public:
   Bar(const char* title) {
      strcpy(m_title, title, 30);
   }
   Bar(const char* title, size_t len):Line(len * 70 / 100){
      strcpy(m_title, title, 30);
   }
   void draw()const {
      cout << m_title << endl;
      Line::draw();
   }
};

int main() {
   cout << "OOP244 NAA - Mar 11" << endl;
   Bar B1("Nothing");
   Bar B2("Something", 80);
   B1.draw();
   B2.draw();
   return 0;
}
#include <iostream>
#include "cstr.h"
using namespace std;
using namespace seneca;
class Line {
   size_t m_len;
   size_t correctLen(size_t len) {
      if (len > 79) len = 79;
      return len;
   }
public:
   Line() :m_len{ 0 } {};
   Line(size_t length);
   Line& operator=(size_t len) {
      m_len = correctLen(len);
      return *this;
   }
   void draw()const {
//      for (size_t i = 0; i < m_len; cout << "-",  i++);
      for (size_t i = 0; i < m_len; i++) {
         cout << "-";
      }
      cout << endl;
   }
};
Line::Line(size_t length) :m_len(correctLen(length))/*this initialization overrides the inline one*/ {
};
class Bar : public Line {
   char m_title[21];
public:
   Bar(const char* title) {// since the Line is not initialized, it will be defaulted
      strcpy(m_title, title, 20);
   }
   Bar(const char* title, size_t length) :Line(length) {
      strcpy(m_title, title, 20);
   }
   void draw()const {
      cout << m_title << ":" << endl;
      Line::draw();
   }
};


int main() {
   cout << "OOP244 NBB - Mar 09" << endl;
   Bar B("Nothing");
   Bar B2("Something", 50);

   B.draw();
   B2.draw();
   return 0;
}
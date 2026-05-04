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



int main() {
   cout << "OOP244 NAA - Mar 11" << endl;
   Line L1;
   Line L2 = 40;// is not operator=, initialization is a call to the one argument constructor
   L1.draw();
   L2.draw();
   L2 = 20;// call to operator=.
   L2.draw();
   return 0;
}
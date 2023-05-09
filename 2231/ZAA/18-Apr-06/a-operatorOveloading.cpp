#include <iostream>
#include "DynArray.h"
#include "Utils.h"

using namespace std;
using namespace sdds;

class Bar {
   char m_title[11]{};
   size_t m_length{};
   char m_fill{ '-' };
public:
   Bar(int length = 0) :m_length(length) {}
   ostream& draw(ostream& ostr = std::cout)const {
      if(m_title[0]) ostr << m_title << endl;
      for(size_t i = 0; i < m_length; i++) {
         ostr.put(m_fill);
      }
      ostr << endl;
      return ostr;
   }
   Bar& operator=(const char* str) {
      ut.strcpy(m_title, str, 10);
      return *this;
   }
   Bar& operator=(size_t num){
      m_length = num;
      return *this;
   }
   operator size_t()const {
      return m_length;
   }
   size_t operator+(int value) const{  // binary with no side effect;
      return m_length + static_cast<size_t>(value);
   }
};

size_t operator+(int val, const Bar& b) {
   return static_cast<size_t>(val) + size_t(b);
}

ostream& operator<<(ostream& ostr,const Bar& RO) {
   RO.draw(ostr);
   return ostr;
}


int main() {
   Bar b(20);
   size_t len;
   size_t v;
   b = "Students";
   cout << b << endl;
   b = 25;
   cout << b << endl;
   len = b;  // must be a member
   cout << "length is: " << len << endl;
   v = b + 10;
   cout << "length of bar + 10 is: " << v << endl;
   v = 10 + b;
   cout << "length of bar + 10 is: " << v << endl;
   return 0;
}
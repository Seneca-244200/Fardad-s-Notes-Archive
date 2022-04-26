#include <iostream>
using namespace std;
class Container {
   unsigned m_value;
public:
   Container() {
      m_value = 0;
   }
   Container(const Container&) = delete;
   void operator=(const Container&) = delete;
   operator bool() const {
      return m_value != 0;
   }
};
int main() {
   cout << "MS1 and MS2 Overview" << endl;
   Container C;
   Container D;
   Container A(C);
   if (C) {
      cout << "Contianter has something in it" << endl;
   }
   C = D;
   return 0;
}
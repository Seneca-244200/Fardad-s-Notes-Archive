#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
class Container {
   int m_value;
public:
   Container(int value = 0) {
      set(value);
   }
   Container& set(int value) {
      m_value = value;
      return *this;
   }
   int get()const {
      return m_value;
   }
   ostream& display(ostream& ostr = cout) {
      ostr << "Cn:[";
      ostr.width(9);
      ostr.fill('0');
      ostr.setf(ios::right);
      ostr << get();
      ostr.fill(' ');
      ostr.unsetf(ios::right);
      ostr << "]";
      return ostr;
   }
   Container& add(const Container& C) {
      m_value += C.m_value;
      return *this;
   }
   Container& add(int value) {
      m_value += value;
      return *this;
   }
};

int main() {
   Container C = 1234;
   Container D = 100000;
   C.display() << endl;
   C.set(3456).display() << endl;
   C.add(10000);
   C.display() << endl;
   C.add(D).display() << endl;
   return 0;
}


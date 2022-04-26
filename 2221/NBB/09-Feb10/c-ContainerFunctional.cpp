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
   ostream& display(ostream& ostr = cout)const {
      ostr << "Cn[";
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
   Container addWithNoSideEffect(const Container& C) {
      Container temp(m_value + C.m_value);
      return temp;
   }
};
void displayAll(const char* prompt, 
                const Container& C, 
                const Container& D, 
                const Container& E) {
   cout << prompt << endl;
   cout << "C: ";
   C.display();
   cout << " D: ";
   D.display();
   cout << " E: ";
   E.display() << endl;
}
int main() {
   Container C = 1234;
   Container D = 100000;
   Container E;
   displayAll("Aftere Construction: ",C, D, E);
   // C = 3456;
   C.set(3456);
   displayAll("C.set(3456)", C, D, E);
   // C += 10000;
   C.add(10000);
   displayAll("C.add(10000);", C, D, E);
   // E = C + D;
   E = C.addWithNoSideEffect(D);
   displayAll("E = C.addWithNoSideEffect(D)", C, D, E);
   // C += D;
   C.add(D);
   displayAll("C.add(D)", C, D, E);

   return 0;
}


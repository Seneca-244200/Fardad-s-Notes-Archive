
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
class Num {
   int m_value;
public:
   Num(int value = 0) {
      m_value = value;
//      cout << "Creating num with " << (m_value) << endl;;
   }
   void set(int value) {
      m_value = value;
   }
   void add(int value) {
      m_value += value;
   }
   int value()const {
      return m_value;
   }
   ostream& display(ostream& coutRef = cout)const {
      coutRef << m_value;
      return coutRef;
   }
   ~Num() {
      //cout << "Removing " << m_value << endl;
   }
};
Num add(const Num& left, const Num& right) {
   Num sum(left.value() + right.value());
   return sum;
}
int main() {
   Num n;
   Num m = 5;
   Num s;
   n.set(10);
   n.display() << endl;
   n.add(20);
   n.display() << endl;
   s = add(n, m);
   s.display() << endl;
   return 0;
}
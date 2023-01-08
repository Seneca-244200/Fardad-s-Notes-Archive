
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
class Num {
   int m_value;
public:
   Num(int value = 23) {
      cout << "Creating num with " << (m_value = value) << endl;;
   }
   ostream& display(ostream& coutRef = cout)const {
      coutRef << m_value;
      return coutRef;
   }
   ~Num() {
      cout << "Removing " << m_value << endl;
   }
};
int main() {
   Num n;
   n = 1234;
   n.display() << endl;
   n = Num(4321);
   n.display() << endl;
   int a;
   a = int(1234.5678);
   cout << a << endl;
   return 0;
}
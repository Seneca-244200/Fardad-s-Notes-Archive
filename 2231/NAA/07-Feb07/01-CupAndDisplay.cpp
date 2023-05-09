#include <iostream>
using namespace std;
class Cup {
   unsigned int m_capacity;
   unsigned int m_volume;
public:
   Cup(unsigned int capacity = 250u) {
      m_capacity = capacity;
      m_volume = 0;
   }
   ostream& display(ostream& ostr = cout) {
      ostr << m_volume << "/" << m_capacity;
      return ostr;
   }
};
int main() {
   Cup coffee;
   coffee.display(cout << "Here is ") << " cup of coffee!" << endl;
   return 0;
}
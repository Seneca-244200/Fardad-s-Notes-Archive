#include <iostream>
#include "Coffee.h"
using namespace std;
namespace sdds {
   void brew(Coffee* cf, int strength) {
      cf->m_strength = strength;
   }
   void display(const Coffee* cf) {
      cout << cf->m_beanType << " Strength [1->3]: " << cf->m_strength << endl;
   }
}
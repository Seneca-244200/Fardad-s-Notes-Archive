#include <iostream>
#include "Num.h"
using namespace std;
Num::Num(int value) {
   m_value = value;
}

ostream& Num::display(ostream& coutRef)const {
   cout << m_value;
   return coutRef;
}

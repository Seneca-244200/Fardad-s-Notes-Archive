#include <iostream>

#include "String.h"
using namespace std;

using namespace seneca;
int main() {
   String s1 = "ABC", s2 = "DEF";
   s1.add(s2);
//   s1 += s2;
   s1.display() << endl;
   return 0;
}


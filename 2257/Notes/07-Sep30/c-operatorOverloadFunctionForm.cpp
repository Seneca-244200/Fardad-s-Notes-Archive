#include <iostream>

#include "String.h"
using namespace std;

using namespace seneca;
int main() {
   String s1 = "ABC", s2 = "DEF";
   s1.operator+=(s2);
   s1.operator+=("GHI");
   s1.display() << endl;
   return 0;
}


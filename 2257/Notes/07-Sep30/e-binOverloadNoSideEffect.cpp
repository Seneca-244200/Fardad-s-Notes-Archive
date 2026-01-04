#include <iostream>

#include "String.h"
using namespace std;

using namespace seneca;
int main() {
   String s1 = "ABC", s2 = "DEF";
   String S;
   S = s1 + s2;
 //  S = s1.operator+(s2);
   S.display() << endl;
   return 0;
}


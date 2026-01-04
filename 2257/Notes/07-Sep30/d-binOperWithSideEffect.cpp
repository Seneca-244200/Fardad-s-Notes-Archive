#include <iostream>

#include "String.h"
using namespace std;

using namespace seneca;
int main() {
   String s1 = "ABC", s2 = "DEF";
   String S;
   S = s1 += s2;
   S.display() << endl;
   S = s1 += "GHI";
   S.display() << endl;
   S = s2 += s1;
   S.display() << endl;
   return 0;
}


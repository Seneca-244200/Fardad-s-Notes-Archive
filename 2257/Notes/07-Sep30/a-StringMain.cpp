#include <iostream>

#include "String.h"
using namespace std;

using namespace seneca;
int main() {
   String str = "ABC";
 /*  String str("ABC");
   String str{ "ABC" };*/
   str.add("DEF");
   str.display() << endl;
   return 0;
}


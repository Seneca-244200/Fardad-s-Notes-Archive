#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void PrintStringInBraces(String S) {
   cout << "[";
   S.display() << "]" << endl;
}
int main() {
   String s, r = "Hello there!";
   String t = r;
   s.display() << endl;
   r.display() << endl;
   r.set("Another thing to set this to!");
   r.display() << endl;
   t.display() << endl;
   PrintStringInBraces(t);
   return 0;
}
#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
String printStringWithNewline(String Str) {
   cout << Str << endl;
   return Str;
}
String& printStringWithNewlineByRef(String& Str) {
   cout << Str << endl;
   return Str;
}
int main() {
   String S;
   String A = "Fred"; // one arg constructor
   String B = A;// copy constructor
//   String B(A);  same as above;
   S = "Hello"; // assignment
   A = S;  // copy assingment 
   printStringWithNewlineByRef(S);
   printStringWithNewline(S);
   return 0;
}
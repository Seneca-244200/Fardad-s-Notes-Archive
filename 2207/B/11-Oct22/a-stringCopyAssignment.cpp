#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
String& prnWithNewline(String& T) {
   cout << T << endl;
   return T;
}
int main() {
   String S;
   S = "Hello";
   cout << S << endl;
  ' prnWithNewline(S);
   return 0;
}

/*
double d = 3.45;
int i;

i = int(d);



*/
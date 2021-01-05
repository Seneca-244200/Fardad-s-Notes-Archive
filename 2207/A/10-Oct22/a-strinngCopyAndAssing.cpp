#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
String prnWithNewline(String T) {
   cout << T << endl;
   return T;
}
int main() {
   String S;
   S = "Hello"; // is exactly what happens below if operator=(const char*) does not exist
   // S = String("Hello");
   cout << S << endl;
   prnWithNewline(S);
   return 0;
}

/*
double a;

a = double(4);


*/
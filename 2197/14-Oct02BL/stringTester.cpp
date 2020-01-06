#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void LengthAndAstrisk(String A) {
   cout << A.length() << "*";
   A.display() << "*" << endl;
}
void goodLengthAndAstrisk(const String& A) {
   cout << A.length() << "*";
   A.display() << "*" << endl;
}

int main() {
   String S, R = "Hello there how are you?";
   LengthAndAstrisk(S);
   LengthAndAstrisk(R);
   cout << R.cString() << endl;
   R.set("Heehaw the hoohoo with heehee!");
   LengthAndAstrisk(R);
   LengthAndAstrisk(S.set("A new value"));
   return 0;
}




int a;
double d;
double& dr = d;
double* p;
double*& pr = p;









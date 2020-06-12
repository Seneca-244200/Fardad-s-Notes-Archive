#include <iostream>
#include "string.h"
using namespace sdds;
using namespace std;

void print(String T) {
   T.print();
   cout << endl;
}

void print(int a) {
   cout << a << endl;
}

int main() {
   String S = "Hi";
   String T = " Hello";
   String U;
   U = concat(S, T);

   cout << S << endl;
   cout << "This is " << T << endl;
   print(S);
   return 0;
}
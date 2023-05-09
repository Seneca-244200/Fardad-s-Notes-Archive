#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;
void prnChar(const String& S, size_t index) {
   cout << S[index] << endl;
}

int main() {
   String S = "ABC";
   String empty;
   prnChar(S, 5);

   prnChar(empty, 5);


   return 0;
}
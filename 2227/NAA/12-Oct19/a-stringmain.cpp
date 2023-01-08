#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void backwards(const String& S) {
   for (int i = S.length() - 1; i >= 0; i--) {
      cout << S[i];
   }
   cout << endl;
}
int main() {
   String name = "Lisa";
   cout << name[2] << endl;
   name[0] = 'M';
   cout << name << endl;
   name[10] = 'X';
   cout << name << endl;
   backwards(name);
   return 0;
}
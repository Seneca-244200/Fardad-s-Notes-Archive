#include <iostream>
#include <fstream>
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
   ofstream hi("hello.txt");
   hi.width(20);
   hi.fill('*');
   hi.setf(ios::left);
   hi << "hello" << endl;
   hi.unsetf(ios::left);
   hi.width(20);
   hi << "hello" << endl;
   String name = "Lisa";
   hi << name[2] << endl;
   name[0] = 'M';
   hi << name << endl;
   name[10] = 'X';
   hi << name << endl;
   backwards(name);
   return 0;
}
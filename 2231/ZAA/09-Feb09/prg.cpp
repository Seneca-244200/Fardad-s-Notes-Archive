#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;
using namespace sdds;
void testone() {
   String name = "Fred", last = "Soley";
   name += last;
   cout << name << endl;
}
void whyThisWorks() {
   String name = "Fred", last = "Soley";
   name += " ";
   name += last;
   cout << name << endl;
}
int main() {
   testone();
   whyThisWorks();
   return 0;
}
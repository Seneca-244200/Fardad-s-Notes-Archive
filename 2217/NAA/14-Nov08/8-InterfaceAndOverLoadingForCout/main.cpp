#include <iostream>
#include <cstring>
#include "cat.h"
#include "budgie.h"
#include "goldfish.h"
using namespace sdds;
using namespace std;
void test();
int main() {
   test();
   Pet* ap[3] = { new Cat, new Budgie, new GoldFish };
   //ap[0]->act();
   for (int i = 0; i < 3; i++) {
      cout << "---------------------Loop " << i + 1 << endl << *ap[i];
   }
   cout << "---------------------End of main" << endl;
   for (int i = 0; i < 3; delete ap[i++]);
   return 0;
}
void test() {
   Budgie B;
   Cat C;
   Animal* p = &B;
   cout << B << endl;
   cout << *p << endl;
   p = &C;
   cout << *p << endl;
}

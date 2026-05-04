#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
#include "budgie.h"
#include "goldfish.h"
using namespace sict;
int main() {
  Cat C;
  Budgie B;
  GoldFish G;
  Pet* ap[3] = { &C, &B, &G };
  for (int i = 0; i < 3; i++) {
    cout << "---------------------Loop " << i + 1 << endl
      << *ap[i];
  }
  cout << "---------------------End of main" << endl;
  return 0;
}

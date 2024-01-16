#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
#include "budgie.h"
#include "goldfish.h"
#include "SDDS_Debug.h"
using namespace sdds;
int main(){
  //debug.deactivate(); // remove constructor and desturctor messages
  Cat C;
  Budgie B;
  GoldFish G;
  B.teachWord("I Can Talk too!");
  Animal* ap[3] = { &C, &B, &G };
  for (int i = 0; i < 3; i++){
    cout << "---------------------Loop " << i + 1 << endl
      << *ap[i];
  }
  cout << "---------------------End of main" << endl;
  //debug.activate(); // show only at the end so displsy destructor messages
  return 0;
}

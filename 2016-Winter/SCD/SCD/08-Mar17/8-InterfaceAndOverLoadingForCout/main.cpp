#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
#include "budgie.h"
#include "goldfish.h"
using namespace sict;
int main(){
  Pet* ap[3] = { new Cat, new Budgie, new GoldFish };
  //Animal* ar = new Budgie[3];
  int i;
  for (i = 0; i < 3; i++){
    cout << "---------------------Loop " << i + 1 << endl
      << *ap[i];
  }
  //delete[] ar;
  //delete[] ap; wrong, tries to delete array of 3 pointers that are NOT dynamic
  for (i = 0; i < 3; i++){
    delete ap[i];
  }
  cout << "---------------------End of main" << endl;
  return 0;
}

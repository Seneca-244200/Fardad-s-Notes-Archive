#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
#include "budgie.h"
#include "goldfish.h"
using namespace sdds;
int main(){
   Animal* ap[3] = { new Cat, new Budgie, new GoldFish };
//   Pet* ap[3] = { new Cat, new Budgie, new GoldFish };
   //ap[0]->act();
  for (int i = 0; i < 3; i++){
    cout << "---------------------Loop "<< i + 1 << endl;
    ap[i]->act();
    ap[i]->move();
    ap[i]->sound();
  }
  cout << "---------------------End of main" << endl;
  for (int i = 0; i < 3; delete ap[i++]);
  return 0;
}

#include <iostream>
#include "Animal.h"
using namespace sict;
using namespace std;
int main() {
  Animal A("Buffy");
  Animal B;
  Animal C;
  B = "Tom";
  //B.operator=("Tom");
  cout << A.name() << endl;
  cout << B.name() << endl;
  //C.setEmpty();
  C = "Whatever";
  if (C) {
    cout << C.name() << endl;
  }
  else{
    cout << "No name" << endl;
  }
  cout << "--------Program ends here!" << endl;
}
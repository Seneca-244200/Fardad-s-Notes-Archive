#include <iostream>
using namespace std;
#include "Container.h"
int main() {
  Container C(24, "Box"), D(300);
  D = C + 10;
//  cout << D.name() << ": " << D.value() << endl;
  cout << D << endl;
  C = 20 + D;
//  cout << C.name() << ": " << C.value() << endl;
  cout << C << endl;
  cin >> D;
  cout << D << endl;
  D = C += " of milk";
  cout << C << endl << D << endl;
  return 0;
}
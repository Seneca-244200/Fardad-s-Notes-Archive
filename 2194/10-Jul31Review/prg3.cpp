#include <iostream>
using namespace std;
#include "Container.h"
int main() {
  Container C(24, "Box"), D(300);
  ~D;
  ~C;
  D = C++;
  cout << C << endl;
  cout << D << endl;
  return 0;
}
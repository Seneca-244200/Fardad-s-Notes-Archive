#include <iostream>
using namespace std;
#include "Container.h"
int main() {
  Container C(24, "Box");
  int value = 50;
  int val;
  C = value;
  cout << C << endl;
  val = C;
  cout << val << endl;
  cout << ((const char*)C) << endl;
  return 0;
}
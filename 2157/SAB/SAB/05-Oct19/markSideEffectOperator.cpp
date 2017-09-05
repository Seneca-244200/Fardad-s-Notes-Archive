#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sict;
int main(){
  Mark A("Test 1", 30);
  Mark B("Test 2", 40);
//  A.operator+=(B);
  A += B;
  A.display() << endl;

  return 0;
}
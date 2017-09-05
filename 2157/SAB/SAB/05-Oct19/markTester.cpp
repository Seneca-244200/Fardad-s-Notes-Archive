#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sict;
int main(){
  Mark A("Test 1", 30);
  Mark B("Test 2", 40);
  Mark C;
//  C = sum(A, B);
//  C = operator+(A, B);
  C = A + B;
  C.display() << endl;

  return 0;
}
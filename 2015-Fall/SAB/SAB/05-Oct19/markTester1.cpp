#include "Mark.h"

using namespace sict;
int main(){
  Mark A("Test 1", 30);
  Mark B("Test 2", 40, 50);
  Mark C = B; // copying (same as oop2(oop1));
  A.dspName().sp().dspWMark().nl();
  B.dspName().sp().dspWMark().nl();
  C.dspName().sp().dspWMark().nl();
  return 0;
}
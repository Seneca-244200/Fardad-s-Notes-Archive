
#include "Cont.h"
int main(){
  int b = 10;
  int a;
  Container C(20);
  Container D;
  C.display();
  D = C + b;
// D = C.operaor+(b);
  D.display();
  D = C - 5;
  a = 40 - C;
  cout << a << endl;
  return 0;
}
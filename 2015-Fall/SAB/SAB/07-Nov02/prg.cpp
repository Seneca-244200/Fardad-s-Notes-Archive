#include "Cont.h"
int main(){
  int a = 10;
  Container C(20);
  Container D;
  D = C += a;
  C.display();
  D.display();
  C = ++D;
  D.display();
  C.display();
  C = D++;
  D.display();
  C.display();
  cout << D << endl;
  cout << C << endl;
  return 0;
}
#include <iostream>
using namespace std;
#include "Cont.h"

int main(){
  int a = 10;
  Container C(20);
  Container D;
  C.display() << endl;
  cout << D << endl << C << endl;
  cout << "The value of Container: ";
  cin >> D;
  cout << D << endl << C << endl;
  return 0;
}
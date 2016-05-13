#include <iostream>
using namespace std;
#include "Mark.h"
using namespace sict;
int main(){
  int* p = (int*)8;
  double* q = (double*)8;
  Mark* m = (Mark*)0;
  cout << int(p) << endl;
  p = p + 1;
  cout << int(p) << endl;
  cout << "value of q (double pointer)" << endl;
  cout << int(q) << endl;
  q = q + 1;
  cout << int(q) << endl;
  cout << "value of m (Mark pointer)" << endl;
  cout << int(m) << endl;
  m = m + 1;
  cout << int(m) << endl;

  return 0;
}
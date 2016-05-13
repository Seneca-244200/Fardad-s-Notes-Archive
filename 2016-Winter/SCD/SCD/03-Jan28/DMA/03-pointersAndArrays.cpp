#include <iostream>
using namespace std;
#include "Mark.h"
using namespace sict;
int main(){
  int a[5] = { 10, 20, 30, 40, 50 };
  int* p;
  cout << *a << endl;
  p = a;
  cout << *p << endl;
  cout << p[3] << endl;
  cout << *(a + 2) << endl;
  cout << a[2] << endl;
  return 0;
}
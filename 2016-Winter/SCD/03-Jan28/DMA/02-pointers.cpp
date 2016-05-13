#include <iostream>
using namespace std;
#include "Mark.h"
using namespace sict;
int main(){
  int a = 5;
  int* p;
  p = &a;
  cout << *p << endl;
  a = 2 * *p;

  cout << a << endl;


  return 0;
}
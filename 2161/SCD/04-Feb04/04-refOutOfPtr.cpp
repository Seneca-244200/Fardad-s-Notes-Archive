#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int* p;
  p = &a;
  int& b = *p;
  b = 45;
  cout << a << " " << *p << endl;
  return 0;
}

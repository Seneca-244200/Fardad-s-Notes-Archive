#include <iostream>
using namespace std;

int main() {
  int a;
  int& b = a;
  a = 10;
  cout << b << endl;
  b = 20;
  cout << a << endl;
  return 0;
}

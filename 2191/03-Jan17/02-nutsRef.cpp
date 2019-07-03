#include <iostream>
using namespace std;
int& foo(int& a) {
  return a;
}
int main() {
  int num;
  foo(num) = 200;  // nuts, think about it!
  cout << num << endl;
  return 0;
}
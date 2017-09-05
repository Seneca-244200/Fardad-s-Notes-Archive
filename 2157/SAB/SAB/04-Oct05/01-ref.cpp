#include <iostream>
using namespace std;

int main() {
  int a;
  int& R = a;
  a = 20;
  cout << R << endl;
  R = 10;
  cout << a << endl;
  return 0;
}
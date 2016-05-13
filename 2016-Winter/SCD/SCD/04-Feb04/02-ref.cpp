#include <iostream>
using namespace std;
void addTen(int& r){
  r += 10;
}
int main() {
  int a;
  int b = 30;
  a = 10;
  addTen(a);
  cout << a << endl;
  addTen(b);
  cout << b << endl;
  return 0;
}

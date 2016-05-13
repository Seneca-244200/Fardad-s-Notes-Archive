#include <iostream>
using namespace std;

int main(){

  int a = 2;
  int b = !!a;
  bool c = true;
  cout << c << endl;
  cout << b << endl;
  c = a < b;
  cout << c << endl;
  c = a > b;
  cout << c << endl;
  return 0;
}
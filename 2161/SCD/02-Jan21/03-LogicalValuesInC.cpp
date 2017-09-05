#include <iostream>
using namespace std;

int main(){

  int a = 2;
  int b = 55;
  int c;
  cout << b << endl;
  b = !!a;
  cout << b << endl;
  c = a < b;
  cout << c << endl;
  c = a > b;
  cout << c << endl;
  return 0;
}
#include <iostream>
using namespace std;

int main(){
  int a;
  int& r = a;
  cout << &a << endl;
  cout << &r << endl;
  return 0;
}
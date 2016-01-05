#include <iostream>
using namespace std;

int main(){
  int* p;
  int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  p = &a[2];
  cout << "value at adress " << int(p) << " is " << *p << endl;
  p++;
  cout << "value at adress " << int(p) << " is " << *p << endl;
  return 0;
}
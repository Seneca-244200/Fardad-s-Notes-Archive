#include <iostream>
using namespace std;
void set(int* p){
  cout << &p << endl;
  *p = 30;
}
int main(){
  int a = 10;
  int b = 20;
  cout << &a << endl;
  cout << a << endl;
  cout << b << endl;
  set(&a);
  set(&b);
  cout << a << endl;
  cout << b << endl;
  return 0;
}
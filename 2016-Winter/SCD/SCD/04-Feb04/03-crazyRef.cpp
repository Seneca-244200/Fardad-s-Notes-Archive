#include <iostream>
using namespace std;
int& IAmWhatIGet(int& r){
  return r;
}
//int& badRef(){
//  int a = 10;
//  return a;
//}
int foo(){
  int x = 100;
  return x;
}
int main() {
  int a = 10;
  a += foo();
  cout << a << endl;
  IAmWhatIGet(a) -= 50;
  cout << a << endl;
  return 0;
}

#include <iostream>
using namespace std;
void foo(int i) {
   cout << i << endl;
}
void foo(int* p) {
   cout << *p << endl;
}
int main() {
   int x = 34;
   foo(20); // at line 3: void foo(int i = 20){
   foo(x);  // at line 3: void foo(int i = x){
   foo(&x); // at line 3: void foo(int* p = &x){
   return 0;
}
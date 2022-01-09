#include <iostream>
using namespace std;
void foo(int& i) {
   cout << i << endl;
   i += 10;
}

void foo(int* p) {
   cout << *p << endl;
   (*p) += 20;
}

int main() {
   int value = 50;
   foo(value);   // at line 3: void foo(int& i = value){
                 // therefore i becomes a new name for value
   cout << value << endl;

   foo(&value); // at line 3 void foo(int* p = &value){
   cout << value << endl;

   return 0;
}


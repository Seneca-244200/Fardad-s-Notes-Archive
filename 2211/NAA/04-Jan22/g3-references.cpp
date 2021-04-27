#include <iostream>
using namespace std;
void foo(int& i) {
   cout << i << endl;
   i += 10;
}
void foo(int* p) {
   cout << *p << endl;
   (*p) += 10;
}
int main() {
   int value = 50;
   foo(value);
   cout << value << endl;
   foo(&value);
   cout << value;
   return 0;
}


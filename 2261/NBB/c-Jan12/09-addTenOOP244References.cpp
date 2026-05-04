#include <iostream>
using namespace std;

void addTen(int& val) {
   val += 10;
}
void addTen(int* valPtr) {
   (*valPtr) += 10;
}

int main() {
   int a = 20;
   addTen(a);  // addTen(int& val = a);
   cout << a << endl;
   addTen(&a); // addTen(int* valPtr = &a);
   cout << a << endl;
   return 0;
}

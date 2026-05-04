#include <iostream>
using namespace std;

int& addTen(int& val) {
   val += 10;
   return val;
}

int main() {
   int a = 20;
   addTen(a) += 5;  // addTen(int& val = a) += 5;
   cout << a << endl;

   return 0;
}

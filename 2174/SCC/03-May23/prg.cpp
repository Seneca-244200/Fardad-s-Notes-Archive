#include <iostream>
using namespace std;


int& foo(int& a) {
   a += 10;
   return a;
}

int main() {
   int x = 30;
   foo(x) += 30;
   cout << x << endl;
   foo(x) = 0;
   cout << x << endl;
   return 0;
}
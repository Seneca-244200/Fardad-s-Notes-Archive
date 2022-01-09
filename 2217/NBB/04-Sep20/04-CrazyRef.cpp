// uncomment the lines 5 and 6 and do it as a walkthrough challenge.
#include <iostream>
using namespace std;
int& foo(int& i) {
//   cout << i << endl;
//   i += 10;
   return i;
}

int main() {
   int value = 50;
   foo(value) += 20;  
   cout << value << endl;
   return 0;
}


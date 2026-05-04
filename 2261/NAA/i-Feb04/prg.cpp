#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;

int main() {
   cout << "OOP244 NAA - Feb04" << endl;
   ValidatedInt vi("Jar", 10, 0, 100);
   int val{};
   val = vi;
   cout << "The value of vi is: " << val << endl;
   vi.display();
   for (size_t i = 0; i < 3; i++) {
      cout << vi[i] << endl;
   }
   cout << int(vi) << "   " << (const char*)(vi) << endl;
   return 0;
}
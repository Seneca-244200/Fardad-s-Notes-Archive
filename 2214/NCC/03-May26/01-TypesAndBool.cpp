#include <iostream>
using namespace std;

bool getInt(int* val) {
   ...
}


int main() {
   bool val;
   val = true;
   cout << "val: " << val << endl;
   val = false;
   cout << "val: " << val << endl;
   val = 234;
   cout << "val: " << val << endl;
   int a;
   if (getInt(&a)) {
      cout << "yaadaa yaadaa" << endl;
   }
   a = 60 > 50;  // 0 or 1
   if (a) {  // 0 is false, anything but zero is true

   }
   return 0;
}
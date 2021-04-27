#include <iostream>
using namespace std;
int main() {
   bool res = true;
   int a = 25;
   int val = 234;
   cout << res << endl;
   res = val < a;
   cout << res << endl;
   res = !a;
   cout << res << endl;
   cout << val << endl;
   val = !!a; // 0 !25 is 0 and !0 is 1
   cout << val << endl;
   val = !a;
   cout << val << endl;
   res = !!a;
   cout << res << endl;
   res = a;  // better not to do, but compiler does res = (bool)a;
   cout << res << endl;
   res = 234;
   cout << res << endl;
   return 0;
}
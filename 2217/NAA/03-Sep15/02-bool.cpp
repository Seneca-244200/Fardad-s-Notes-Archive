#include <iostream>
using namespace std;
int main() {
   bool res = true;
   int a = 25;
   cout << true << endl;
   cout << false << endl;
   cout << "res: " << res << endl;
   res = !res;
   cout << "res: " << res << endl;
   res = 2345;
   cout << "res: " << res << endl;
   if (234) {
      cout << "234 is not zero and therefore true!" << endl;
   }
   res = !a;
   cout << res << endl;
   res = !!a;
   cout << res << endl;
   cout << !!a << endl;
   return 0;
}
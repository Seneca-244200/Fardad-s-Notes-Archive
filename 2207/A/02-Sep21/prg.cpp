#include <iostream>
using namespace std;
int main() {
   bool cond = false;
   cout << cond << endl;
   cond = true;
   cout << cond << endl;
   if (234) {
      cout << "this is true" << endl;
   }
   else {
      cout << "this is false" << endl;
   }

   if (cond) {
      cout << "this is true" << endl;
   }
   else {
      cout << "this is false" << endl;
   }

   cond = 234;
   cout << cond << endl;
   if (cond) {
      cout << "this is true" << endl;
   }
   else {
      cout << "this is false" << endl;
   }

  
   return 0;
}
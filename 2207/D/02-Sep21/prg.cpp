
#include <iostream>
using namespace std;
int main() {
   bool b = false;
   if (b) {
      cout << "This is true." << endl;
   }
   else {
      cout << "This is false." << endl;
   }
   b = true;
   if (b) {
      cout << "This is true." << endl;
   }
   else {
      cout << "This is false." << endl;
   }
   cout << b << endl;
   b = 234;
   cout << b << endl;
   return 0;
}
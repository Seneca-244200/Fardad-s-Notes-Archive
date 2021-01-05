#include <iostream>
using namespace std;
int main() {
   cerr.setstate(ios::failbit);
   cerr << "Hello there!" << endl;
   cout << "ON cout now...." << endl;
   if (cout) {

   }
   if (cout.good()) {

   }
   if (!cin) {

   }
   if (cin.fail()) {

   }
   return 0;
}
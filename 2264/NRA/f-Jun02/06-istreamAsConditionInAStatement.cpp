#include <iostream>
using namespace std;
int main() {
   int a;
   do {
      cout << "Number (negative to stop): ";
      cin >> a;
      if (cin) { // is good
         cout << "You entered: " << a << endl;
      }
      else {
         cin.clear(); // I am so sorry!
         cout << "bad number try again" << endl;
      }
      cin.ignore(10000, '\n');// ingore 10000 characters up to new line (flush)
   } while (a >= 0);
   return 0;
}
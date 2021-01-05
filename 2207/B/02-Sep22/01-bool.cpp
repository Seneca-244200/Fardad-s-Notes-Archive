#include <iostream>
using namespace std;
int main() {
   if (123) {
      cout << "This is true." << endl;
   }
   else {
      cout << "This is false." << endl;
   }
   if (0.00000000001) {
      cout << "This is true." << endl;
   }
   else {
      cout << "This is false." << endl;
   }
   if (0) {
      cout << "This is true." << endl;
   }
   else {
      cout << "This is false." << endl;
   }

   return 0;
}
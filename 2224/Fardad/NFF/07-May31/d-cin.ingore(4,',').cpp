#include <iostream>
using namespace std;
int main() {
   cout << "Enter an int with cin.ingore(4,','): ";
   int i{}; // defaulted by 0
   cin.ignore(4, ',');
   cin >> i;
   cout << i << endl;
   if (cin) {
      cout << "cin ok..." << endl;
   }
   else {
      cout << "cin filed!" << endl;
   }
   return 0;
}
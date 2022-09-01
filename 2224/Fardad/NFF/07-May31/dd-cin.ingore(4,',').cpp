#include <iostream>
using namespace std;
int main() {
   cout << "Enter an int with cin.ingore(4,','): ";
   int i{}; // defaulted by 0
   int j{};
   cin.ignore(4, ',');
   cin >> i >> j;
   cout << i << endl;
   cout << j << endl;
/*
   if (cin) { // if cin is ok
      cout << "cin ok..." << endl;
   }
   else {
      cout << "cin failed!" << endl;
   }
   */
   if (cin.fail()) {  // cin failed sometime before
      cout << "cin failed!" << endl;
   }
   else {
      cout << "cin ok..." << endl;
   }

   return 0;
}
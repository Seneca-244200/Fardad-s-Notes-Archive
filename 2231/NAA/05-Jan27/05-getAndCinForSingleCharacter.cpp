#include <iostream>
using namespace std;
int main() {
   char ch{};

   cout << "char: ";
   ch = cin.get(); // returns an int
   cout << "*" << ch << "*" << endl;
   cin.ignore(10000, '\n');
   cout << "char with reference: ";
   cin.get(ch);  // returns the cin reference
/*
   if (cin.get(ch).fail()) {

   }
*/
   cout << "*" << ch << "*" << endl;
   cin.ignore(10000, '\n');


   return 0;
}

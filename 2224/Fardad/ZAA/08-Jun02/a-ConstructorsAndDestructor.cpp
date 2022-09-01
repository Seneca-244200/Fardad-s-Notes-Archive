#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
//   int i(100); // same as int i = 100;
   int i{ 100 }; //same as above
   Name N;
   //Name M = "Fardad Soleimanloo";  // initialization is a call to a one argument constructor
   Name M("Fardad Soleimanloo"); // same as above
//   Name M{ "Fardad Soleimanloo" }; // save as above
   Name S("Sir", "John Doe");
   cout << "Enter you name: ";
   N.read();
   cout << "hello! ";
   cout << i << endl;
   N.display() << " how are you?" << endl;
   M.display() << " is there also!" << endl;
   S.display() << " hello your highness" << endl;
   return 0;
}

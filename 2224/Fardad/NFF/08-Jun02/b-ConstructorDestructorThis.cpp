#include <iostream>
#include "Utils.h"
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   //int i(100);
   int i{ 100 };
   Name N;
   //Name F("Fred Soley"); // using the function notation
   //Name F = "Fred Soley"; // one arg constructor (same as above)
   Name F{ "Fred Soley" }; // same as above;
   //Name S("Sir", "John Doe");
   Name S{ "Sir", "John Doe" }; // as above
   F.display() << endl;
   N.set("Nina Doe").display() << endl;
   S.display() << endl;
   cout << i << endl;
   return 0;
}
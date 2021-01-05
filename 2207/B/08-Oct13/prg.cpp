#include <iostream>
#include <iomanip>
#include "String.h"
using namespace sdds;
using namespace std;
String globalStr = "Myglobal String";
String& whatever() {
   return globalStr;
}

double& add2AndImpersonate(double& d) {
   d += 2.0;
   return d;
}

int main() {
   double value = 5.0;
   String name = "Fred Soley";
   whatever().display(); // whatever become a new name for the globalStr;
                         // using the same logic, display() of String, becomes 
                         // a new name for the global "cout" object
   cout << endl;
   name.display() << setw(10) << right << 123 << endl;
   add2AndImpersonate(value);
   cout << value << endl;
   add2AndImpersonate(value) += 10;
   cout << value << endl;
   
   return 0;
}
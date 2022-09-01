#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void introduce(String lname) {
   cout << "Introducing mister " << lname << endl;
}
int main() {
   String str = "Homer";
   String lastName;
   String name = "Fardad";
   cout << "Hi " << str << " what is your last name?\n> ";
   cin >> lastName;
   introduce(lastName);  // introduce(lname = lastName)
   name = str;
   cout << name << endl;
   return 0;
}
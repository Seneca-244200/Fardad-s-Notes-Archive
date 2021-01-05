#include <iostream>
using namespace std;
#include "String.h"
using namespace sdds;
int main() {
   String name;
   name.init();
   name.set("Joe");
   name.display() << endl;
   // cout << endl;
   name.set("Fardad");
   name.display()<< endl;
   return 0;
}

/*

 ostream cout;
 istream cin;
 */
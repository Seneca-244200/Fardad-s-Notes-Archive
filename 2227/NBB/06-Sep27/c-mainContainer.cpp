#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container cnt;
   bool done;
   do {
      done = true;
      cnt.read();
      if(cin.fail()) {
         cin.clear(); // say sorry to cin
         cin.ignore(10000, '\n');
         done = false;
      }
   } while(!done);
   cnt.display() << endl;
   return 0;
}
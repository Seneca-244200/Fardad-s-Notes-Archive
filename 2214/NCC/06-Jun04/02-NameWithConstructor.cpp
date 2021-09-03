#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name n;
   Name* np;
   np = new Name;// any new needs a delete
   np->set("Dynaminc", "Name");
   n.set("Fred", "Soley");
   n.print();
   delete np;  
   n.set("Jack", "Black");
   n.print();
   return 0;
}
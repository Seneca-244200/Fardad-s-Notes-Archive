#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   sdds::debug = true;
   Name n;// no arg constructor or default const
   Name st("Jane", "Brown");
   Name jk("Jackson");
   n.set("Jack", "Black");
   n.print();
   st.print();
   jk.print();
   return 0;
}
#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;
int main() {
   Name n; // no argument constructor will be called
   Name teacher("Fardad", "Soleimanloo");// two argument constructor will be called
  // n.init();// has to be called right after creation
            // to prevent program crash
//   Name X("Jackson");// one argument constructor
   Name X = "Jackson"; // same as previous line
   // assignment at the moment of creation is to invoke the one argument constructor
   n.print();
   n.set("Homer", "Simpson");
   n.print();
   n.set("Lisa", "Simpson");
   n.print();
   teacher.print();
   X.print();
   cout << "Please call your teacher with his first name that is \""
      << teacher.first() << "\"" << endl;
   //n.deleteMem(); // has to be called before n dies to prevent
                  // memory leak
   return 0;
}
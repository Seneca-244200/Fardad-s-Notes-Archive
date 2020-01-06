#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
//   String A = "Fred";
  String A("Fred");
  String B;
 //  B.operator=("Soley");
   B = "Soley";
   A.concat(" ").concat(B).display() << endl;
   return 0;
}

/*
   A + B;
   A.operator+(B);
   A += C;
   A.operator+=(C);



*/
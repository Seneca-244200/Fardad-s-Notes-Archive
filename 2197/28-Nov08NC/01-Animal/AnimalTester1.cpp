#include <iostream>
#include "Animal.h"
using namespace sdds;
using namespace std;
int main() {
   Animal A = "fluffy";
   if (A) {
      cout << A << " is here" << endl;
   }
   else {
      cout << "Animal is empty" << endl;
   }
   A.setEmpty();
   if (A.isEmpty()) {
      cout << "Animal object is empty" << endl;
   }
   if(A){
      cout << "Animal object is not empty" << endl;
   }
   else {
      cout << "Animal object is empty" << endl;
   }
   return 0;
}
#include <iostream>
#include "Animal.h"
using namespace sdds;
using namespace std;
int main() {
   Animal A = "Fluffy";
 //  if (!A.isEmpty()) {
   if(A){
      cout << A << " is here!" << endl;
      A.act();
      A.move();
      A.sound();
   }
   return 0;
}
#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   Container C("Milk",250.5);
   for (int i = 0; C[i] != '\0'; i++) {
      cout << C[i] << " ";
   }
   cout << endl;

   return 0;
}













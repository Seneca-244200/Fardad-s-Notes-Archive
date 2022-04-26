#include <iostream>
#include "Transcript.h"
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Transcript T;

   cout << T[2] << endl;
   for (unsigned int i = 0; i < T.count() ; i++) {
      cout << T[i] << endl;
   }

   return 0;
}
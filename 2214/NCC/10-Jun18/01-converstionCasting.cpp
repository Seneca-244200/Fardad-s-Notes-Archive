#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;


int main() {
   Container C;

   if (C) { // compiler will attempt if( (bool)C ){
      cout << "C contains " << (const char*)C << " and its volume is " << (double)C << endl;
   }
   else {
      cout << "C is in an invalid safe state!" << endl;
   }
   C.set("Milk", 200.0);
   if (C) { // compiler will attempt if( (bool)C ){
      cout << "C contains " << (const char*)C << " and its volume is " << (double)C << endl;
   }
   else {
      cout << "C is in an invalid safe state!" << endl;
   }
   for (int i = 0; i < 4; i++) {
      cout << C[i] << " ";
   } 
   cout << endl;
   return 0;
}
#include <iostream>
using namespace std; 

   
int main() {
   int b = 20;  // function scope

   if(b < 10){
      int a = 10;

   } // a dies here (block scope)

   for (int i = 0; i < 10; i++) {  // i: block scope
      int j = i;     // j block scope
      cout << j << endl;
   } // j dies at the end of each loop  // i dies at the end of the all loops




   return 0;
} // b dies at the end of fucntion
  

#include "mystring.h"
#include <iostream>
using namespace std;
using namespace ict;
int main(){
   MyString
      S1 = "SBB",
      S2 = "SAA",
      S3 = S2;  // copy 
   S1.print(); 
   cout << endl;
   S2.print();
   cout << endl;
   S1 = S2; // assign
   S1 = S3 = S3;
   S1.print();
   S2.print();
   return 0;
}
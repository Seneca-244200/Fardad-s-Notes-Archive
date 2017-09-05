#include "mystring.h"
#include <iostream>
using namespace std;
using namespace ict;
int main(){
   MyString
      S1 = "SBB",
      S2 = "SAA",
      S3 = S2,  // copy 
      name,
      S4 = "Hello";
   double
      d;
   cout << "Please enter you name: ";
   cin >> name;
   cout << "Hello " << name << ", how are you?" << endl;

   S4 = "whatever";
   d = 4;
   cout << S1 << endl << S2 << endl;
   S1 = S2; // assign
   S1 = S3 = S3;
   cout << S1 << S2 << endl;
   return 0;
}
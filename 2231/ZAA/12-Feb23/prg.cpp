#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

/*
Using your knowledge of:
Pointers
References
External Global Variables
And Operator overloading

Create 'boxed' manipulator object that can put a String
in a box as follows

So if I included "boxed.h" I can have the following.
*/


int main() {
   ofstream file("b.txt");
   String S = "ABC";

   cout << boxed << S << endl;

   //    [ABC]

   file << boxed << S << endl;
   // b.txt will hole [ABC]

   return 0;
}
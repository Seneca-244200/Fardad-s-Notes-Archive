#include <iostream>
using namespace std;
#include "Box.h"
/*
1- object gome to life       Employee E;
2- primary initializttion
3- initilization // this exists for the same property, then 2 will not happen
4- constructor call
5- object availabe to work
6- desctructor is called
7- object goes out of scope
*/


int main() {
   {
      int a{};
      double b[10]{ 1.1,2.2 };
      cout << a << endl;
      cout << b[1] << endl;
      cout << b[3] << endl;
   }
//   int a = 10;
//// here
//   int b;
//   b = 10;
//// here
//
//   int& R = a;
//   // ok here
//   int& R;
//   R = a;
//   // error

   char fill = 'x';

   Box B("My Box", 7, 7, fill);
   //Box A("Defult Box Dimensions"); // potato
 //  Box A = "Defult Box Dimensions"; // potaato
   Box A("Defult Box Dimensions", fill);
   Box C;
   cout << B << endl;
   cout << A << endl;
   cout << C << endl;
   return 0;
}
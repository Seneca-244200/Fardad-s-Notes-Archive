/*
1- object gome to life     Student S;    
2- primary initializttion of properites (members)
3- initilization (custom initialization of parts)
4- constructor call 
5- object availabe to work
6- desctructor is called
7- object goes out of scope
*/
#include <iostream>
using namespace std;
#include "Box.h"

int main() {
   /*int* p{};
   char ch{};
   int i{};
   int ar[10]{10, 20};

   cout << p << endl << ch << endl << i << endl << ar[3] << endl;*/

 /*  int a = 10;
    int a(10);
   int b;
   b = 10;

   int& R = a;*/


   Box A("My Box", 7, 7);
   Box B("Defult Box Dimensions");
   Box C;
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
   return 0;
}

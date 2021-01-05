#include <iostream>
using namespace std;
#include "Box.h"
/*
1- object gome to life       Employee E;
2- primary initializttion
3- initilization
4- constructor call
5- object availabe to work 
6- desctructor is called
7- object goes out of scope
*/
int main() {
   char ch = '*';
//   Box B = "My Box" ; // assignment at the moment of creation is a constructor call
   Box B("My Box", ch);
   B.display();

   /*int a;
   a = 10;

   int a = 10;

   int& R = a;

   int& R;
   R = a;*/

}

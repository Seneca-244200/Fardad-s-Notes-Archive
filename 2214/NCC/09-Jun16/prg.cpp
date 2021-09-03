#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;


int main() {
   int c = 1;
   int d;
   d = c++;
   cout << c << endl;
   cout << d << endl;

   //assingment at the moment of creation is a 
   // call to a one argument constructor and NOT THE ASSIGNMENT OPERATOR
   Container C = "Milk";
   Container D;
   cout << C << endl;
   cin >> C;
   cout << "C: " << C << endl;
   D = ++C;

   cout << "C: " << C << endl;
   cout <<"D: " << D << endl;
   D = C++;
   cout << "C: " << C << endl;
   cout <<"D: " << D << endl;
   return 0;
}
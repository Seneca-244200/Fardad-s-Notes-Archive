#include <iostream>
#include "Bottle.h"
using namespace std;
using namespace seneca;
int main() {
   int amount;
   Bottle B = "B";
   Bottle C("C", 500);
   Bottle D("D", 600);
   C = 300;
   C.display() << endl;
   B = 100;
   cout << "09-Oct07 OOP244 NAA" << endl;
   B.display( ) << endl;
   B += 120;
   B.display() << endl;
   B += 200;
   B.display() << endl;
   C = B;
   C.display() << endl;
   D = B + C;
   D.display() << endl;
   ++D;
   D.display() << endl;
   D = 0;
   D = C++;
   D.display() << endl;
   C.display() << endl;
   amount = D;
   cout << "amount: " << amount << endl;
   amount += C;

   return 0;
}
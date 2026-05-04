#include <iostream>
#include "Vehicle.h"
#include "Airplane.h"

using namespace std;
using namespace seneca;

int main() {
   Airplane a1;
   Airplane a2("AC901", 650, 30000);
   Airplane a3("ZX777", 120, -500);

   cout << "---- Airplane objects after construction ----" << endl;
   a1.display(cout);
   cout << endl;
   a2.display(cout);
   cout << endl;
   a3.display(cout);
   cout << endl;

   cout << endl;
   cout << "---- Using inherited base class function accelerate ----" << endl;
   a2.accelerate(50);
   a2.display(cout);
   cout << endl;
   a2.accelerate(-200);
   a2.display(cout);
   cout << endl;

   cout << endl;
   cout << "---- Airplane-specific climb() feature ----" << endl;
   a2.climb(2000);
   a2.display(cout);
   cout << endl;
   a2.climb(-5000);
   a2.display(cout);
   cout << endl;

   cout << endl;
   cout << "---- Overridden move() without using Vehicle::move() ----" << endl;
   a1.move();
   a2.move();
   a3.move();

   cout << endl;
   cout << "---- Overridden display() using Vehicle::display() ----" << endl;
   a1.display(cout);
   cout << endl;
   a2.display(cout);
   cout << endl;
   a3.display(cout);
   cout << endl;

   return 0;
}
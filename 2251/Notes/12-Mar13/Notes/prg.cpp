#include <iostream>
using namespace std;
class Bicycle {

public:


};
class Mechanic;
class Engine {

public:

   friend class Mechanic;
};

class Mechanic {

public:

};

              //    is a
class Motorcycle: public  Bicycle {
   // has a
   Engine E;
public:

};


int main( ) {
   cout << "OOP244NAA - Mar13 - Inheritance" << endl;
   return 0;
}
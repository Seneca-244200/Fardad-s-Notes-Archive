#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
class Thing {
   int m_value;
public:
   Thing(int value);
};
Thing::Thing(int value):m_value(value) {}
class Package {
   Thing m_thing;
   int m_data;
public:
   Package();
   Package(int data);
};
Package::Package():m_data(0), m_thing(-1){
  // m_data = 0;
   //m_thing = Thing(24); never do this
}

Package::Package(int data): m_thing(data < 0? 10: data) {
   m_data = data;
}
int main() {
  // Thing
  //    T1; Error

   Package
      P1;
   Package
      P2 = 100;

   return 0;
}


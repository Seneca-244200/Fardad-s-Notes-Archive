#include "mark.h"

using namespace oop244;

int main(){
  Mark
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40, 50),
    oop2("Object Oriented Programming using C++", "OOP344E", 30),
    oop3;

  // ----------------------------
  oop1.display();
  oop2.display();
  // --------------------------
  //oop2.operator=(oop1); same as below
  oop2 = oop1;
  // ----------------------------
  oop1.display();
  oop2.display();
  // --------------------------
  oop3 = oop2;
  oop3 = oop1 = oop2 = 10; // possible because operator=() returns *this
  oop2 = "Heehaw the hoohoo";
//  oop2.operator=(10);
  // ----------------------------
  oop1.display();
  oop2.display();
  oop3.display();
  // --------------------------

  return 0;
}
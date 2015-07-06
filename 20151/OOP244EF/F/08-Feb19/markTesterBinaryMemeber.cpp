#include "mark.h"
#include <iostream>
using namespace std;
using namespace oop244;

int main(){
  Mark
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40),
    oop2("Object Oriented Programming using C++", "OOP344E", 10, 50),
    oop3;
  oop3 = oop1 + oop2;
  // ----------------------------
  oop1.display();
  oop2.display();
  oop3.display();
  cout << "-------------------------------------" << endl;
  // --------------------------
  return 0;
}
#include "mark.h"
#include <iostream>
using namespace std;
using namespace oop244;

int main(){
  Mark
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40),
    oop2("Object Oriented Programming using C++", "OOP344E", 10, 50),
    oop3;
  oop3 = oop1 - oop2;
  // ----------------------------
  cout << oop1 << endl << oop2 << endl << oop3 << endl;
  cout << "-------------------------------------" << endl;
  // --------------------------
  
  return 0;
}
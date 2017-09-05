#include "mark.h"
#include <iostream>
using namespace std;
using namespace oop244;

int main(){
  Mark
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40, 50),
    oop2("Object Oriented Programming using C++", "OOP344E", 30),
    oop3;
  cout << "-------------------------------------" << endl;
  oop2.display();
  ++oop2;
  cout << "-------------------------------------" << endl;
  oop2.display();
  oop3 = oop2  + oop1 ;
  return 0;
}
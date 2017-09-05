// OOP244 Workshop 7: compositions 
// File	w7_part1.cpp
// Version 1.0
// Date	7/13/2015
// Author	Franz Newland
// Description
// This file demonstrates the client module of Engine.cpp 
/////////////////////////////////////////////////////
#include "Engine.h"
#include <iostream>
using namespace std;
using namespace oop244;

int main(){
  Engine sixLitreV8(6.0, "V8");
  // 15 dashes
  cout << "---------------" << endl;
  sixLitreV8.display(std::cout)<<endl;
  cout << "---------------" << endl;
  return 0;
}
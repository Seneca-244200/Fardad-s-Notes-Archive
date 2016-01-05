// OOP244 Workshop 7: compositions
// File	w7_part2.cpp
// Version 1.0
// Date	13/7/2015
// Author	Franz Hewland
// Modified by Fardad Soleimanloo
// Description
// This file demonstrates the client module of w7 
/////////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include "Engine.h"
#include "Ship.h"
using namespace oop244;
int const MIN = 90;
int main()
{
   Engine shipEngines[3] = 
  { 
    Engine(6.0, "V6"), 
    Engine(8.0,"V8"), 
    Engine(4.2, "Inline") 
  };

  Ship titanic("Liner", shipEngines, 3);
  cout << titanic << endl;
 
  //Comparing with the standards:
  if (titanic<MIN)
    cout << "Below average!" << endl;
  else
    cout << "Above average!" << endl;
  return 0;
}

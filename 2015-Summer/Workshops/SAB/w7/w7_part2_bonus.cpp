// OOP244 Workshop 7: compositions
// File	w7_part2_bonus.cpp
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
    Engine(8.0, "V8"),
    Engine(4.2, "Inline")
  };
  cout << "titanic -->" << endl;
  Ship titanic("liner", shipEngines, 3);
  cout << titanic << endl;
  
  Ship backup = titanic;
  cout << "backup -->" << endl;
  cout << backup << endl;
  
  Ship blank;
  titanic = blank;
  blank = backup;
  cout << "blank -->" << endl;
  cout << blank << endl;
  cout << "titanic -->" << endl;
  cout << titanic << endl;
  cout << "operator< -->" << endl;
  //Comparing with the standards:
  if (blank<MIN)
    std::cout << "Below average!" << std::endl;
  else
    std::cout << "Above average!" << std::endl;
  return 0;
}

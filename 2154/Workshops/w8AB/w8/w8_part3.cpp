// OOP244 Workshop 8: Derived Classes
// File	w8_part3.cpp
// Version 1.1
// Date	2015/05/21
// Author	Franz Newland
// Modified by Fardad Soleimanloo
// Date 2015/20/7
//  
/////////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include "SuperHero.h"
using namespace oop244;
int main()
{
	int powers[] = { 2, 44, 20, -3 };
	SuperHero hercules(powers, 4, "Hercules", 400);
  SuperHero Nothing;
  SuperHero Prof((int*)0, 0, "Fardad", 200);
  cout << hercules
    << "----------------" << endl;
  cout << Prof
    << "----------------" << endl;
  cout << Nothing
    << "----------------" << endl;
  *((Hero*)&Nothing) = Hero("Invisible Man", 300);
  cout << Nothing
    << "----------------" << endl;
  // uncomment next line and you should get an error
  // Nothing = Prof; 
  // uncomment next line and you should get an error
  // SuperHero someone(Prof);
  return 0;
}

// OOP244 Workshop 8: Derived Classes
// File	w8_bonus.cpp
// Version 1.1
// Date	2015/05/21
// Author	Franz Newland
// Modified by Fardad Soleimanloo
// Date 2015/20/7
/////////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include "SuperHero.h"
using namespace oop244;
int main()
{
	int powers[] = { 2, 44, 20, -3 };
	SuperHero hercules(powers, 4, "Hercules", 400);
  SuperHero Hcopy = hercules;
  SuperHero Empty;
  SuperHero Prof((int*)0, 0, "Fardad", 200);
  cout << "hercules-----------" 
    << endl << hercules << endl;
  cout << "Hcopy--------------" 
    << endl << Hcopy << endl;
  cout << "Prof---------------" 
    << endl << Prof << endl;
  cout << "Empty--------------" 
    << endl << Empty << endl;
  Hcopy = Empty;
  cout << "Hcopy--------------" 
    << endl << Hcopy << endl;
  Prof += 11;
  cout << "Prof---------------" 
    << endl << Prof << endl;
  Prof = hercules + 32;      
  cout << "Prof---------------" 
    << endl << Prof << endl;
  hercules = 13 + hercules;
  cout << "hercules-----------" 
    << endl << hercules << endl;
  return 0;
}

// OOP244 Workshop 8: Derived Classes
// File	w8_part1.cpp
// Version 1.1
// Date	2015/05/21
// Author	Franz Newland
// Modified by Fardad Soleimanloo
// Date 2015/20/7
// Description
// This file demonstrates the client module of w8 part1 
/////////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include "Hero.h"
using namespace oop244;
int main(){
	Hero stuart("Stu Dent", 400.00);
	Hero trevor("T Cher", 650.00);

  stuart.display(cout) << endl;
  trevor.display(cout) << endl;

	if (trevor<stuart)
		cout << "Stewart is stronger.";
	else
		cout << "Trevor is stronger.";
  return 0;
}

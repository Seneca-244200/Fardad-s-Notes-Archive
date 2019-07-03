#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Name.h"
using namespace std;
using namespace sict;

int main() {
  Name N("Fardad", "soley");
  Name X;
  N.display();
  cout << endl;
  X.display(); 
  cout << endl;




  N.display(cout) << endl;

  return 0;
}
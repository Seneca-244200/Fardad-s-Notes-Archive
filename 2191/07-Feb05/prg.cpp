#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Name.h"
using namespace std;
using namespace sict;

int main() {
  Name N("Fardad", "soley");
  Name M("Fardood", "Whatever");
  Name O(N);
  N.display(cout) << endl;
  M.display(cout) << endl;
 
 // M.copy(N);
//  M.operator=(N);

  M = N;
  cout << "---------------------------------" << endl;
  N.display(cout) << endl;
  M.display(cout) << endl;
  O.display(cout) << endl;
  return 0;
}
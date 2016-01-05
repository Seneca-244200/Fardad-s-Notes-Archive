#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sict;
int main(){
  Mark M("test 1", 20, 40);
  Mark M2(M);// same thing as Mark M2(M)
  Mark M3;
  Mark M4("Final", 80);
  Mark& R = M;
  M.display();
  cout << endl;
  M2.display();
  cout << endl;
  M3.display();
  cout << endl;
//  M3.set(M);
//  M3.operator=(M);
  M3 = M;
  M3.display();
  cout << endl;
  M = M2 = M4;
  M = R = M3;
  ++M;
  M.display();
  cout << endl;
  M3 = M++;
  M.display();
  cout << endl;
  cout << M << endl;
  return 0;
}
#include "Name.h"
#include <cstring>
#include <iostream>
using namespace std;
using namespace sict;
int main(){
  Name N;
  N.display();
  cout << endl;
  Name n1 = "John Doe"; // same as Name n1("John Doe");
  Name n2 = n1;  // same as Name n2(n1);
  Name n3("Homer Simpson");
  n1.display() << endl;
  n2.display() << endl;
//  n2.operator=(n3);
  n1 = n2 = n3;
  n1.display() << endl;
  n2.display() << endl;
  n3.display() << endl;
  return 0;
}
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
  Name n2 = "Fardad Soley";
  n1.display();
  cout << endl;
  n2.display();
  cout << endl;
  n1 = n2;
  n1.display();
  cout << endl;
  n2.display();
  cout << endl;
  return 0;
}

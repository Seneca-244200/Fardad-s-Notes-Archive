#include <iostream>
#include "Animal.h"
using namespace sict;
using namespace std;
int main() {
  Animal A("Buffy");
  Animal B;
  Animal C;
  /* prevented by deleting them in desing
  Animal C = A; // potato
  Animal C(A);  // potaato
  B = A;
  */
  C = B = "Jerry";
  cout << "Hello "<<  A << endl;
  B.display();
  cout << C << endl;
  return 0;
}
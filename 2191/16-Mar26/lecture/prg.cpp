// this program does not compile....
// try to fix it
#include <iostream>
#include <cstring>
#include "Array.h"
using  namespace ict;
using namespace std;
struct Name {
  char name[50];
  Name(const char n[] = "") {
    strncpy(name, n, 49);
    name[49] = 0;
  }
  const bool operator>(const Name& N)const {
    return strcmp(name, N.name) > 0;
  }
};
ostream& operator<<(ostream& os, const Name& N) {
  return os << N.name;
}

int main() {
  int i;
  Array<int> I(5);
  Array<Name> N(3);
  N[0] = "Fardad";
  N[1] = "Fardood";
  N[2] = "Fardeed";
  for (i = 0; i < 7; i++) {
    I[i] = i * 10;
  }
  for (i = 0; i < I.size(); i++) {
    cout << I[i] << " ";
  }
  cout << endl;
  for (i = 0; i < I.size(); i++) {
    cout << I[i] << " ";
  }
  cout << endl;
  for (i = 0; i < N.size(); i++) {
    cout << N[i] << " ";
  }
  cout << endl;
  return 0;
}
#include <iostream>
#include "Animal.h"
using namespace sict;
using namespace std;
int main() {
  Animal A("Buffy");
  Animal B;
  Animal C;
  B = "Tom";
  //B.operator=("Tom");
  cout << "Enter animal name: ";
  cin >> C;
  cout << A << endl;
  cout << B << endl;
  cout << C << endl;
  //C.setEmpty();
  C = "Whatever";
  if (C) {
    cout << C << endl;
  }
  else{
    cout << "No name" << endl;
  }
  cout << "--------Program ends here!" << endl;
}
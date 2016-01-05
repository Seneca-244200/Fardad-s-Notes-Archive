#include <iostream>
#include "Car.h"
#include "Employee.h"
using namespace std;
using namespace oop244;
int main(){
  Employee E;
  Car C;
  cin >> E;
  E.work();
  cout << E << endl;
  cin >> C;
  C.run();
  cout << C << endl;

  E >> C;
  //drive(E, C);
  E.drive(C);
  return 0;
}
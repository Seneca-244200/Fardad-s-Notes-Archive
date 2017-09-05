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
  E.drive(C);
  E >> C;
  return 0;
}
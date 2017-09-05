#include "car.h"
#include "engine.h"
#include <iostream>
using namespace std;
using namespace oop244;
int main(){
  Car A("Audi A3 TDI", "Diesel 1.8 Liter", 4, 170.0);
  Car B("Honda Civic Dx", "Gasoline 1.8 liter", 4, 143.0);
  Car C("Tesla Model S P85D", "Electric, LIPO battery", 0, 691.0);
  Engine E("Gasoline 2.4 liter", 4, 2.4);
  cout << A << endl << B << endl << C << endl << endl;
  cout << "Honda 2.4-litre, 16-valve, DOHC, i-VTEC engine specs: " << endl 
       << E << endl;
  return 0;
}
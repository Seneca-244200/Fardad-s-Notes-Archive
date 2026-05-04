#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;
void showName(Name name) {
   cout << "Name: " << name << endl;
}
int main() {
   cout << "OOP244 NBB - Mar 02" << endl;
   Name N("John", "Smith");
   Name F("Fred", "Soley");
   Name& R = N;
   cout << N << endl;
   showName(N); // shoeName(Name name = N);
   N = R;
   cout <<"Before assign: " << F << endl;
   F = N;
   cout <<"After assign: " <<  F << endl;
   return 0;
}
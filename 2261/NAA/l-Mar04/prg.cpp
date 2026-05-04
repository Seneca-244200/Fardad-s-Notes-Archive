#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;
void showName(Name name) {
   cout << "Name: " << name << endl;
}
int main() {
   cout << "OOP244 NAA - Mar 04" << endl;
   cout << "What is you name?\n> ";
   Name name ("some ", "name");
   cin >> name;
   Name N("John", "Smith");
   Name F("Fred", "Soley");
   cout << N << endl;
   Name& R = N;
   cout << R << endl;
   showName(N); // showName(Name name = N);
   N = F;
   cout << N << endl;
   N = R;
   cout << N << endl;
   cout << "Goodbye " << name << endl;
   return 0;
}
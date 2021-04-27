#include <iostream>
#include "Name.h"
#include "FullName.h"
using namespace std;
int main() {
   Name N = "John";
   cout << N << endl;
   FullName fn("Jane", "Doe");
   FullName N1 = fn;
   FullName fs("Fred", "Soley");
   cout << fn << endl;
   cout << N1 << endl;
   cout << fs << endl;
   fs = N1;
   cout << fs << endl;
   return 0;
}
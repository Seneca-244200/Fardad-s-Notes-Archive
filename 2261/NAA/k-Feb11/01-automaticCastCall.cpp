#include <iostream>
#include "cstr.h"
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;

int main() {
   cout << "OOP244 NAA - Feb11" << endl;
   int val{ 50 }, res{};
   double d{ 20.2 };
   char name[81];
   res = val += d;

   ValidatedInt vi("Jar", 10, 0, 100);
   res = val += vi;
   cout << "res: " << res << ", val: " << val << endl;
   res = val + vi;
   cout << "res: " << res << ", val: " << val << endl;
   res = val - vi;
   cout << "res: " << res  << ", val: " << val << endl;
   seneca::strcpy(name, vi);
   cout << name << endl;
   return 0;
}
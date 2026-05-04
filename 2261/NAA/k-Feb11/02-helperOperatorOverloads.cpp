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

   ValidatedInt vi("Jar", 10, 0, 100), xi;

   // res = operator+=(val, vi);
   res = val += vi;
   cout << "res: " << res << ", val: " << val << endl;
   // res = operator-(val, vi);
   res = val - vi;
   cout << "res: " << res << ", val: " << val << endl;
   // int operator-(vi);
   res = -vi;
   return 0;
}
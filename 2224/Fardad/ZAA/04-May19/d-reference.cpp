#include <iostream>
using namespace std;

int main() {
   int a;
   // r is an alias for a
   // which means there are two names for the same integer
   // one integet with two names;
   int& r = a;

   // int& X; error, X must point to another reference 
   int& X = r;

   a = 10;
   cout << r << endl;
   r++;
   cout << a << endl;
   X += 2;
   cout << r << endl;
   cout << unsigned(&a) << endl;
   cout << unsigned(&r) << endl;
   cout << unsigned(&X) << endl;



   return 0;
}
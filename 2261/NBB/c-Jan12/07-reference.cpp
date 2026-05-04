#include <iostream>
using namespace std;
int main() {
   double d = 123.4567;
   double& r = d;
   cout << "r: " << r << endl;
   r = 345.123;
   cout << "d: " << d << endl;
   cout << (unsigned long long) & d << " " << (unsigned long long) & r << endl;
   return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dbl = 123.456789123;
   cout << setw(20) << fixed << setprecision(2) << setfill('.') << left << dbl << endl;

   return 0;
}
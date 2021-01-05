#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   double v = 123.567890;
   cout << "----------------------" << endl;
   cout << fixed << left << setw(20) << v << endl;
   cout << right << setw(20) << setprecision(2) << setfill('#') << v << endl;

   return 0;
}
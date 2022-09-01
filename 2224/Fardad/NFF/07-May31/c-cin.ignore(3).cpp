#include <iostream>
using namespace std;
int main() {
   double dbl = 123.4567;
   cout << "Enter a double with cin.ingore(3): ";
   cin.ignore(3);
   cin >> dbl;
   cout << dbl << endl;
   return 0;
}
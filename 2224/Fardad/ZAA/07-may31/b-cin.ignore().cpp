#include <iostream>
using namespace std;
int main() {
   double dbl;
   cout << "Enter a double with cin.ingore(): ";
   cin.ignore();
   cin >> dbl;
   cout << dbl << endl;
   return 0;
}
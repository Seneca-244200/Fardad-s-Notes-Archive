#include <iostream>
using namespace std;
int main() {
   cout.width(10);
   cout << 10 << "*" << endl;
   cout.width(20);
   cout << "abc" << "*" <<  endl;
   cout.width(10);
   cout << "in 10";
   cout.width(15);
   cout << "in 15" << endl;

   return 0;
}
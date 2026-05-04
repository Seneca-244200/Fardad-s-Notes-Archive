#include <iostream>
using namespace std;

int main() {
   cout << "OOP244 NAA - Jan 14" << endl;
   int val = 10;
   int& V = val;
   cout << V << endl;
   V = 20;
   cout << val << endl;

   return 0;
}

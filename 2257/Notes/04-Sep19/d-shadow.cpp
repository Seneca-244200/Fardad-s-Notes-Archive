// shadowing.cpp

#include <iostream>
using namespace std;
int i = 22;
int main() {
   int i = 6;
   cout << i << endl;
   for (int j = 0; j < 3; j++) {
      int i = j * j;
      cout << i << endl;
   }
   cout << i << endl;
}
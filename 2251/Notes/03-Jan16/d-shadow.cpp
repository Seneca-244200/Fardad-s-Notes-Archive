#include <iostream>
using namespace std;
int main( ) {
   int i = 10;
   {
      int i = 20;
      cout << i << endl;
   }
   cout << i << endl;
   return 0;
}
#include <iostream>
using namespace std;
int main( ) {
   double num{};
   for ( size_t i = 0; i < 4; i++ ) {
      cout << (i+1) <<  "- Enter a double\n> ";
      cin >> num;
      cout << "You entered: " << num << endl;
   }
   return 0;
}
#include <iostream>
using namespace std;
int main( ) {
   char upc[5];
   cin.getline( upc, 5, ',' );
   cout << "read: >" << upc << "<" << endl;
   if ( cin.fail( ) ) {
      cout << "Invlid UPC!" << endl;
   }
   return 0;
}
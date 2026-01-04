#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;
int main( ) {
   Name N = "Fred", Empty;
   Name H = "Homer";
   Name L = "Lisa";
   Name S = "Simpson";
   Name FL;
   //Name N( "Fred" );
   //Name N{ "Fred" }; //same as first line
   cout << "*******************************" << endl;
   N.display( ) << endl;
   Empty.display( ) << endl;
   cout << "*******************************" << endl;
   N++;
// N.++(int);
// N.operator++(int); // int is not an argument, it is only 
                     // a flag indicating the postfix ++;
   N += "Soley";
// N.+=("Soley");
// N.operator+=("Soley");
   N.display( ) << endl;
   ++S;
// S.operator++();
   H += S;
// H.operator+=(S);
   H.display( ) << endl;
   FL = L + S;
// FL = L.operator+(S);
   FL.display( ) << endl;
   cout << "The length of ";
   FL.display( ) << " name is " << int( FL ) << endl;
   int len = FL;
   cout << len << endl;

   for ( size_t i = 0; i < FL; i++ ) {
      cout << FL[i] << " ";
   }
   cout << endl;
   return 0;
}
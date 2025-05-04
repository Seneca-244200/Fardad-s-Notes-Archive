#include <iostream>
#include "Title.h"
using namespace std;
using namespace seneca;
int main( ) {
   Title lecture = "14-Mar20-OOP244 NAA";
   /*Title lecture("14-Mar20-OOP244 NAA");
   Title lecture {"14-Mar20-OOP244 NAA"};*/
   Title l2 = lecture;
   Title l3( "whatever" );
   l3 = lecture;
   cout << lecture << endl;
   cout << l2 << endl;
   cout << l3 << endl;
   return 0;
}
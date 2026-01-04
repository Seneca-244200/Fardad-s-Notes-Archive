#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;
int main( ) {
   Name FS;
   Name S = "Sol";
   FS = "Fredrich " + S;
   cout << FS << endl;


   return 0;
}
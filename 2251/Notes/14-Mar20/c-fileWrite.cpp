#include <iostream>
#include <fstream>
#include "Doc.h"
using namespace std;
using namespace seneca;
int main( ) {
   ofstream file("lecture.txt" );
   Doc lecture( "Fardad Soleimanloo", "14-Mar20-OOP244 NAA" );
   file << lecture << "------------------------" << endl;
   return 0;
}
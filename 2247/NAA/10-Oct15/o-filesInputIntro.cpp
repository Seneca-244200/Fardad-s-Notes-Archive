#include <iostream>
#include <fstream>
using namespace std;


int main( ) {
   int num;
   ifstream file( "numbers.txt" );
   while ( file ) {
      file >> num;
      cout << num << endl;
   }
   return 0;
}
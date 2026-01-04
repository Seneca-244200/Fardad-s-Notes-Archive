
#include <iostream>
#include <fstream>
using namespace std;
int main( ) {
   ifstream file( "myfile.txt" );
   char str[256];
   int years;
   double money;
   file >> str;
   cout << ">" << str << "<" <<endl;
   file.getline( str, 80 );
   cout << ">" << str << "<" << endl;
   file >> years;
   cout << "Years in Canada: " << years << endl;
   file.ignore( 10000, '\n' );
   file >> money;
   cout.width( 8 );
   cout.setf( ios::fixed );
   cout.precision( 2 );
   cout << "weekly pay: " << money <<  endl;
   return 0;
}
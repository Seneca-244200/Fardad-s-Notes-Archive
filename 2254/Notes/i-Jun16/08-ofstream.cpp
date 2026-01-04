
#include <iostream>
#include <fstream>
using namespace std;
int main( ) {
   ifstream file( "myfile.txt" );
   ofstream output( "report.txt" );
   char str[256];
   int years;
   double money;
   file >> str;
   output << ">" << str << "<" <<endl;
   file.getline( str, 80 );
   output << ">" << str << "<" << endl;
   file >> years;
   output << "Years in Canada: " << years << endl;
   file.ignore( 10000, '\n' );
   file >> money;
   output.width( 8 );
   output.setf( ios::fixed );
   output.precision( 2 );
   output << "weekly pay: " << money <<  endl;
   return 0;
}
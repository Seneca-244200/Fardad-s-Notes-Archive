#include <iostream>
#include <fstream>
using namespace std;
int main( ) {
   cout << "11-Oct12 OOP244 ZAA!" << endl;
   ofstream myfile( "swiftie.txt" );
   myfile << "11-Oct12 OOP244 ZAA!" << endl;
   myfile.setf( ios::right);
   myfile << "*";
   myfile.width( 50 );
   myfile << "11-Oct12 OOP244 ZAA!" <<"*" << endl;
   return 0;
}
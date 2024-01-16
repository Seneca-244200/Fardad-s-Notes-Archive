#include <iostream>
#include <fstream>
using namespace std;
int main( ) {
   int i;
   char date[10];
   char subject[4];
   int code;
   cout << "11-Oct12 OOP244 ZAA!" << endl;
   ofstream myfile( "swiftie.txt" );
   myfile << "11-Oct12 OOP244 ZAA!" << endl;
   myfile.setf( ios::right );
   myfile << "*";
   myfile.width( 50 );
   myfile << "11-Oct12 OOP244 ZAA!" << "*" << endl;
   myfile.close( );
   ifstream myinfile( "swiftie.txt" );
   myinfile >> i;
   myinfile.ignore( );
   myinfile >> date;
   myinfile.ignore( );
   myinfile.get( subject, 4 );
   myinfile >> code;
   cout << "session number: " << i << endl;
   cout << "Date: " << date << endl;
   cout << "Subject: " << subject << endl;
   cout << "Subject code: " << code << endl;
   myfile.open( "something.txt" );
   myfile << "Something is here!" << endl;
   return 0;
}
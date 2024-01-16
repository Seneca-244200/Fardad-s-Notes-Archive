#include <iostream>
#include <fstream>
using namespace std;
int main( ) {
   int i;
   char date[10];
   char subject[4];
   int code;
   cout << "11-Oct12 OOP244 ZAA!" << endl;
   ifstream myfile( "swiftie.txt" );
   myfile >> i;
   myfile.ignore( );
   myfile >> date;
   myfile.ignore( );
   myfile.get( subject, 4 );
   myfile >> code;
   cout << "session number: " << i << endl;
   cout << "Date: " << date << endl;
   cout << "Subject: " << subject << endl;
   cout << "Subject code: " << code << endl;
   return 0;
}
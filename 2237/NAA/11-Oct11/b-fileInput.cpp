#include <iostream>
#include <fstream>
using namespace std;
int main( ) {
   cout << "11-Oct11 OOP244 NAA and possibly ZAA!" << endl;
   int session;
   char date[10];
   ifstream myfile( "data.txt" );
   if ( myfile ) {
      myfile >> session;
      cout << session << endl;
      myfile.ignore( );
      myfile >> date;
      cout << date << endl;
   }
   else {
      cout << "Failed to open the file!" << endl;
   }
   return 0;
}
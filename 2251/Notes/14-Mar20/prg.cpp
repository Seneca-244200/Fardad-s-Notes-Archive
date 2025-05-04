#include <iostream>
#include <fstream>
#include "Doc.h"
using namespace std;
using namespace seneca;
int main( ) {
   ifstream file("lecture.txt" );
   char date[15];
   char subject[21];
   int num;
   file >> num;
   file.ignore( );
   file.getline( date, 6, '-' );
   file.getline( subject, 21 );
   cout << num << endl;
   cout << date << endl;
   cout << subject << endl;
   return 0;
}
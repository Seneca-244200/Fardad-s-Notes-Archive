#include <iostream>
#include <fstream>
using namespace std;
int main( ) {
   cout << "11-Oct11 OOP244 NAA and possibly ZAA!" << endl;
   ofstream myfile( "data.txt" );
   myfile << "11-Oct11 OOP244 NAA and possibly ZAA!" << endl;


   return 0;
}
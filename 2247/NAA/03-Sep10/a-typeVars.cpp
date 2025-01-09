#include <iostream>
using namespace std;
int main( ) {
   int i = 65;
   char ch = 'A' + 1; //65+1
   bool c = false;
   cout << "03-Sep10 OOP244NAA" << endl;
   cout << char(i) << " " << i << endl;
   cout << ch << " " << int( ch ) << endl;
   cout << (ch > 50) << " " << (ch < 50) <<  endl;
   cout << c << " ";
   c =  bool(ch);
   cout << c << endl;
   return 0;
}
// g++ 1.cpp 2.cpp 3.cpp main.cpp <ENTER>
#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244NAA Jan 21" << endl;
   int num = 10;
   int& n = num;

   cout << n << endl;
   cout << num << endl;

   num = 50;
   
   cout << n << endl;

   return 0;
}
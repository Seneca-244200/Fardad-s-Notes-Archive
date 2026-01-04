#include <iostream>
using namespace std;

int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   int a[6] = { 100,200,300,400,500,600 };
   cout << *a << endl;
   cout << a[0] << endl;
   cout << *(a + 0) << endl;
   cout << a[3] << endl;
   cout << *(a + 3) << endl;
   return 0;
}
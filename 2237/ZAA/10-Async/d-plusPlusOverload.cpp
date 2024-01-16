#include <iostream>
#include "Utils.h"
#include "Integer.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "10-Oct06 OOP244 NAA" << endl;
   Integer i = 10, j = 20, k=30;
   cout << "i: " << i << ", k: " << k << endl;
   cout << "i = ++k;" << endl;
   i = ++k;
   cout << "i: " << i << ", k: " << k << endl;
   cout << "j: " << j << ", k: " << k << endl;
   cout << "j = k++;" << endl;
   j = k++;
   cout << "j: " << j << ", k: " << k << endl;
   return 0;
}

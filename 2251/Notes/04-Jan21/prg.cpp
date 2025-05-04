#include <iostream>
#include "pointer.h"
using namespace std;

int main( ) {
   cout << "OOP244NAA Jan 21" << endl;
   int num = 10;
   int pointer p;
   p = addressOf num;
   cout << targetOf p << endl;
   targetOf p = 12345;
   cout << num << endl;
   return 0;
}
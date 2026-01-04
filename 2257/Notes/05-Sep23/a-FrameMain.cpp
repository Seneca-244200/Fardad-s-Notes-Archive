#include <iostream>
#include "Frame.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "05-Sep23 OOP244 NAA" << endl;
   Frame F;
   Frame F2(30, 15);
   F.draw();
   F.set(40, 10, '+');
   F.draw();
   F2.draw();
   return 0;
}
#include <iostream>
#include "Student.h"
using namespace std;
using namespace seneca;
int main() {
   cout << "OOP244 NBB Jan 14" << endl;
   int j = 20;
   for (int i = 0; i < 10; i++) {
      int j = i * 2;
      cout << j << endl;
   }
   cout << j << endl;
   
   return 0;
}

#include <iostream>
#include <cstring>
#include "Bar.h"
using namespace seneca;
using namespace std;
int main() {
   Bar A;
   Bar B("New Bar", 30);
   if (*(const char*)(A) != char(0)) {
      cout << "Bad safe empty state yor type conversion" << endl;
   }
   else {
      cout << "type conversion looks good" << endl;
   }
   A = "New Title";
   // if you see "New Title printed, your good" 
   cout << (const char*)(A) << endl;
   return 0;
}
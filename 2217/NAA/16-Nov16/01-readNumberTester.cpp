#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int a;
   double d;
   cout << "Enter a mark between 0 and 100: ";
   Utils::read(a);
   cout << "you enterd " << a << endl;
   cout << "Enter GPA: ";
   Utils::read(d, 0.0, 4.0, "Invalid GPA, retry: ");
   cout << "you enterd " << d << endl;


   return 0;
}
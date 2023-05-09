#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String S = "ABC";
   S[5] = 'D';

   cout << ">" << S  << "<" << endl;
   return 0;
}
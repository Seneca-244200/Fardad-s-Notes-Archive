
#include <iostream>
#include "Name.h"
#include "utils.h"
using namespace std;
using namespace sdds;


int main() {
   char str[81];
   cout << "Your name: ";
   //cin.get(str, 81, '\n'); // '\n' will not be extraced
   cin.getline(str, 81, '\n');
   cout << str << endl;
   return 0;
}
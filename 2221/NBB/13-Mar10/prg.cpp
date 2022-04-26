#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   char str[50] = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
   char name[50] = "Lisa Simpson";
   ut.strcpy(str, name, 4);
   cout << str << endl;
   return 0;
}
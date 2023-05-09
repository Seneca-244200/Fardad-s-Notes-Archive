#include <iostream>
#include "bar.h"  // custom headers come always after system
using namespace std;
using namespace sdds;
int main() {
   bar('-', 10);//void(char fill = '-', int len = 10);
   bar('+', 20);
   bar('.');
   bar();
   bar(65);// 70 'A's will be printed 
   return 0;
}

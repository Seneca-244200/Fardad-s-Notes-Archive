#include <iostream>
#include "pointers.h"


using namespace std;
int main() {
   int a = 24;
   int pointer p = addressOf a;
   targetOf p = 345;
   cout << a << endl;

   return 0;
}
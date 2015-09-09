#include <iostream>
using namespace std;
#include "dynArr.h"
using namespace oop244;

int main(){
   double d[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
   DynArr D(d, 5);
   int i;
   for (i = 0; i < D.size(); i++){
      cout << D.element(i) << "  ";
   }
   cout << endl;
   for (i = 0; i < 10; i++){
      D.element(i) = i* 1.3;
   }
   for (i = 0; i < 10; i++){
      cout << D.element(i) << "  ";
   }
   cout << endl;

   return 0;
}
#include <cstdio>
#include "ptr.h"
using namespace std;
int main() {
   double i = 40.123;
   double pointer p;  //double* p;
   p = addressOf i;   // p = &i;
   printf("%lf\n", targetOf p);  //*p
   printf("%u\n", p);
   p++;
   printf("%u\n", p);

   return 0;
}
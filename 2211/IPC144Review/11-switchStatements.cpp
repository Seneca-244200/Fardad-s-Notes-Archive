#include <cstdio>
using namespace std;

int main() {
   int cnt;
   // this if is sutable to be converted to switch becasue
   // it is comparing a variable to several value for equality.
   scanf("%d", &cnt);
   if (cnt == 5) {

   }
   else if (cnt == 10) {

   }
   else if (cnt == 11 && cnt == 12) {

   }
   else {

   }

   switch (cnt) {
   case 5:
      break;
   case 10:
      break;
   case 11:
   case 12:

      break;
   default:

   }
   return 0;
}
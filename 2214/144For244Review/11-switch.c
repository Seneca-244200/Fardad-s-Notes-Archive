#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double PI = 3.14159265;
int main() {

   // one or none based on equality check
   switch (value) {
   case v1: // if (v1 ==  value)
      //action 1
      break;
   case v2:// if (v2 ==  value)
      //actoin 2
      break;
   case v3: // if (v3 ==  value || v4 == value)
   case v4:
      //action 3 or 4
      break;
      ....
   case vn:// if (vn ==  value)
      break;
   }


   // one or else based on equality check
   switch (value) {
   case v1: // if (v1 ==  value)
      //action 1
      break;
   case v2:// if (v2 ==  value)
      //actoin 2
      break;
   case v3: // if (v3 ==  value || v4 == value)
   case v4:
      //action 3 or 4
      break;
      ....
   case vn:// if (vn ==  value)
      break;
   default:
      // if none of the above
      break;
   }
   /*
   break only in switch.
   never use goto or continue
   only ONE retrun statement in an fuction.
   */

  
   return 0;
}
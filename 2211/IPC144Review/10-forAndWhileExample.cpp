#include <cstdio>
using namespace std;

int main() {
   int cnt;

   printf("first\n");
   cnt = 3;
   while (cnt) {
      printf("   body\n");
      cnt--;
      printf("   last2: %d\n", cnt);
   }
   printf("out of loop\n\n");

   for (printf("first\n"), cnt = 3; cnt; cnt--, printf("   last2: %d\n", cnt)) {
      printf("   body\n");
   }
   printf("out of loop\n\n");

   for (cnt = 0; cnt < 3; cnt++) {
      printf("   body\n");
   }
   printf("\n\n");
   cnt = 0;
   while (cnt < 3) {
      printf("   body\n");
      cnt++;
   }

   return 0;
}
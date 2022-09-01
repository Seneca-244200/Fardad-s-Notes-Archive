#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
int main() {
   int nums[5][3] = {
      {10, 20, 30},
      {40, 50, 60},
      {70, 80, 90},
      {1, 2 ,3},
      {4, 5, 6}
   };
   int i, j;
   for (i = 0; i < 5; i++) {
      for (j = 0; j < 3; j++) {
         printf("[%d,%d]: %d ", i, j, nums[i][j]);
      }
      putchar('\n');
   }
   putchar('\n');
   return 0;
}



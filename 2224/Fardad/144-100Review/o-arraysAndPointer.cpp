#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
   int i;
   int* ptr = &i;
   ptr[0] = 123;
   printf("%d\n", i);

   return 0;
}

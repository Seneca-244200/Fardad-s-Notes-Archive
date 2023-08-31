#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
/*
0000 0
0001 1
0010 2
0011 3
0100 4
0101 5
0110 6
0111 7
1000 8
1001 9
1010 A
1011 B
1100 C
1101 D
1110 E
1111 F
*/

int main() {
   int a = 17;  // dec  base 10
   int b = 017;  // oct base 8
   int c = 0x17; // hex base 16
   int val;
   printf("%d  %d  %d\n", a, b, c);
   printf("Enter 017:");
   scanf("%d", &val);
   printf("val: %d\n", val);
   return 0;
}
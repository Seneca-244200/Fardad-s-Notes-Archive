#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
/*
<
>
<=
>=
!=
==
*/
/*
to evalute truth or falsehood
assuming A and B are conditions
A && B;  // true only if both are ture
A || B;  // false only if both are fals;
!A       // true if A is false
*/
int getMark() {
   int mark;
   printf("Enter mark: ");
   scanf("%d", &mark);
   return mark;
}
char toGrade(int mark) {
   char g;
   // one of many
   if (mark <= 100 && mark >=80) {
      g = 'A';
   }
   else if(mark < 80 && mark >= 70) {
      g = 'B';
   }
   else if (mark < 70 && mark >= 60) {
      g = 'C';
   }
   else if (mark < 60 && mark >= 50) {
      g = 'D';
   }
   else if (mark < 50 && mark >= 0) {
      g = 'F';
   }
   else {
      g = 'X';
   }
   return g;
}

//char toGrade(int mark) {
//   char g = 'X';
//   // one or none of many
//   if (mark <= 100 && mark >= 80) {
//      g = 'A';
//   }
//   else if (mark < 80 && mark >= 70) {
//      g = 'B';
//   }
//   else if (mark < 70 && mark >= 60) {
//      g = 'C';
//   }
//   else if (mark < 60 && mark >= 50) {
//      g = 'D';
//   }
//   else if (mark < 50 && mark >= 0) {
//      g = 'F';
//   }
//   return g;
//}

int main() {
   int mark = getMark();
   char grade = toGrade(mark);
   if (grade == 'X') {
      printf("Invalid mark");
   }
   else {
      printf("You got %c\n", grade);
   }
   return 0;
}
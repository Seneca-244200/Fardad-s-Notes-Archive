#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int getGrade() {
   char ch;
   printf("Enter grade: ");
   scanf("%d", &ch);
   return ch;
}
int toMark(char grade) {
   int mark = -1;
   // one or no match
   switch (grade) {
   case 'A':
   case 'a':
      mark = 90;
      break;
   case 'B':
   case 'b':
      mark = 75;
      break;
   case 'C':
   case 'c':
      mark = 65;
      break;
   case 'D':
   case 'd':
      mark = 55;
      break;
   case 'F':
   case 'f':
      mark = 0;
      break;
   }
   return mark;
}
int toMark(char grade) {
   int mark;
   // one match or else (default)
   switch (grade) {
   case 'A':
   case 'a':
      mark = 90;
      break;
   case 'B':
   case 'b':
      mark = 75;
      break;
   case 'C':
   case 'c':
      mark = 65;
      break;
   case 'D':
   case 'd':
      mark = 55;
      break;
   case 'F':
   case 'f':
      mark = 0;
      break;
   default:
      mark = -1;
      break;
   }
   return mark;
}

int main() {
   char grade = getGrade();
   int mark = toMark(grade);
   if (mark < 0) {
      printf("Invalid grade");
   }
   else {
      printf("You got aprox: %d\n", mark);
   }
   return 0;
}
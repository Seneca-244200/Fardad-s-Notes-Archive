#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
   char name[41];
   int stno;
   float gpa;
};

void getStudent(struct Student* S) {
   printf("name: ");
   scanf("%s", S->name);
   printf("stno: ");
   scanf("%d", &S->stno);
   printf("gpa: ");
   scanf("%f", &S->gpa);
}

void prnStudent(const struct Student* S) {
   printf("name: %s\n", S->name);
   printf("stno: %d\n", S->stno);
   printf("gpa: %.1f\n", S->gpa);
}

int main() {
   struct Student S = { "Fardad", 123456, 3.5 };
   struct Student T;
   prnStudent(&S);
   getStudent(&T);
   prnStudent(&T);
   return 0;
}
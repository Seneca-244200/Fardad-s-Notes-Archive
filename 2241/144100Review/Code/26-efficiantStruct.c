#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
   char name[51];
   float gpa;
   int stno;
};

void getStudent(struct Student* st) {
   printf("Name: ");
   scanf("%[^\n]", st->name);
   printf("Stno: ");
   scanf("%d", &st->stno);
   printf("gpa: ");
   scanf("%f", &st->gpa);
}
void printStudent(const struct Student* st) {
   printf("Name: %s\n", st->name);
   printf("Stno: %d\n", st->stno);
   printf("gpa: %0.1f\n", st->gpa);
}


int main() {
   struct Student theSt;
   getStudent(&theSt);
   printStudent(&theSt);
   return 0;
}
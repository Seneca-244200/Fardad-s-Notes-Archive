#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
   char name[51];
   float gpa;
   int stno;
};
void flushKey() {
   while (getchar() != '\n');
}
void getStudent(struct Student* st) {
   fprintf(stdout,"Name: ");
   fscanf(stdin,"%[^\n]", st->name);
   fprintf(stdout,"Stno: ");
   fscanf(stdin,"%d", &st->stno);
   fprintf(stdout,"gpa: ");
   fscanf(stdin,"%f", &st->gpa);
   fflushKey();
}

void getStudents(struct Student* st, int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("student no %d\n", i + 1);
      getStudent(&st[i]);
   }
}


void printStudent(const struct Student* st) {
   printf("Name: %s\n", st->name);
   printf("Stno: %d\n", st->stno);
   printf("gpa: %0.1f\n", st->gpa);
}



int main() {
   struct Student theSt[3];
   int i;
   getStudents(theSt, 3);
   for (i = 0; i < 3; i++) {
      printStudent(&theSt[i]);
   }
   return 0;
}
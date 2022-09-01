#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
using namespace std;

struct Student {
   double gpa;
   long stNo;
   char name[81];
};

int readStudent(Student* sptr, FILE* fptr) {
   return fscanf(fptr, "%[^,],%ld,%lf\n", sptr->name, &sptr->stNo, &sptr->gpa) == 3;
}
void prnStudent(const Student* sptr, FILE* fptr) {
   fprintf(fptr,"Name: %s\n", sptr->name);
   fprintf(fptr,"Student Number: %06ld\n", sptr->stNo);
   fprintf(fptr,"GPA: %0.1lf\n", sptr->gpa);
}
/*
Abraham Simpson,324543,3.9

*/
int main() {
   FILE* fptr;
   FILE* outptr;
   Student S;
   fptr = fopen("student.csv", "r");
   outptr = fopen("student.txt", "w");
   if (fptr && outptr) {
      while (readStudent(&S, fptr)) {
         prnStudent(&S, stdout);
         prnStudent(&S, outptr);
      }
   }
   else {
      printf("Failed to open files");
   }
   if (fptr) fclose(fptr);
   if (outptr) fclose(outptr);
   return 0;
}

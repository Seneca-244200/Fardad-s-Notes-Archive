#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int StrLen(const char* str) {
   int len = 0;
   while (str[len]) {
      len++;
   }
   return len;
}
struct Student {
   char name[41];
   int stno;
   float gpa;
};
struct Student getStudent() {
   struct Student S;
   fprintf(stdout,"name: ");
   fscanf(stdin,"%s", S.name);
   fprintf(stdout, "stno: ");
   fscanf(stdin,"%d", &S.stno);
   fprintf(stdout, "gpa: ");
   fscanf(stdin, "%f", &S.gpa);
   return S;
}
void fgetStudent(struct Student* S, FILE* file) {
   fscanf(file,"%[^,],", S->name);
   fscanf(file,"%d,", &S->stno);
   fscanf(file,"%f\n", &S->gpa);
}

void prnStudent(const struct Student* S) {
   printf("name: %s\n", S->name);
   printf("stno: %d\n", S->stno);
   printf("gpa: %.1f\n", S->gpa);
}
void saveStudent(const struct Student* S, FILE* file) {
   fprintf(file,"%s,", S->name);
   fprintf(file,"%d,", S->stno);
   fprintf(file,"%.1f\n", S->gpa);
}
int main() {
   struct Student S = { "Fardad", 123456, 3.5 };
   struct Student T;
   FILE* fptr = fopen("stddata.csv", "r");
   FILE* outFile = fopen("stdout.csv", "w");
   if (fptr && outFile) {
      prnStudent(&S);
      saveStudent(&S, outFile);
      fgetStudent(&T, fptr);
      prnStudent(&T);
      printf("len: %d\n", StrLen(T.name));
      T = getStudent();
      prnStudent(&T);
      saveStudent(&T, outFile);
      fclose(fptr);
      fclose(outFile);
   }
   else {
      printf("could not open files!");
   }
   return 0;
}
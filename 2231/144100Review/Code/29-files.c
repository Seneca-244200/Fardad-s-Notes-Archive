#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
   char name[51];
   float gpa;
   int stno;
};

void getStudent(struct Student* st,FILE* f) {
   fscanf(f,"%[^,],", st->name);
   fscanf(f,"%d,", &st->stno);
   fscanf(f,"%f\n", &st->gpa);
}

void getStudents(struct Student* st, int size,FILE* f) {
   int i;
   for (i = 0; i < size; i++) {
      getStudent(&st[i],f);
   }
}


void printStudent(const struct Student* st, FILE* f) {
   fprintf(f,"Name: %s\n", st->name);
   fprintf(f,"Stno: %d\n", st->stno);
   fprintf(f,"gpa: %0.1f\n", st->gpa);
}



int main() {
   FILE* fptr;
   FILE* outfptr;
   fptr = fopen("st.txt", "r");
   outfptr = fopen("stout.txt", "w");
   
   struct Student theSt[3];
   int i;
   if (fptr && outfptr) {
      getStudents(theSt, 3, fptr);
      for (i = 0; i < 3; i++) {
         printStudent(&theSt[i], outfptr);
      }
   }
   if(fptr) fclose(fptr);
   if(outfptr) fclose(outfptr);
   return 0;
}
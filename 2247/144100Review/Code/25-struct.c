#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
   char name[51];
   float gpa;
   int stno;
};

struct Student getStudent() {
   struct Student st;
   printf("Name: ");
   scanf("%[^\n]", st.name);
   printf("Stno: ");
   scanf("%d", &st.stno);
   printf("gpa: ");
   scanf("%f", &st.gpa);
   return st;
}
void printStudent(struct Student st) {
   printf("Name: %s\n", st.name);
   printf("Stno: %d\n", st.stno);
   printf("gpa: %0.1f\n", st.gpa);
}


int main() {
   struct Student theSt;
   theSt = getStudent();
   printStudent(theSt);
   return 0;
}
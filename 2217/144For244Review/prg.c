#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flush() {
   char ch = 0;
   while (ch != '\n') {
      scanf("%c", &ch);
   }
}
void getNames(char n[][31], int num) {
   int i;
   for (i = 0; i < num; i++) {
      printf("name %d: ", (i + 1));
      scanf("%[^\n]", n[i]);
      flush();
   }
}
void saveName(char n[][31], int num) {
   FILE* names = fopen("names.txt", "w");
   int i;
   for (i = 0; i < num; i++) {
      fprintf(names, "%s\n", n[i]);
   }
   fclose(names);
}
int main() {
   char name[5][31];
   getNames(name, 5);
   saveName(name, 5);
   return 0;
}
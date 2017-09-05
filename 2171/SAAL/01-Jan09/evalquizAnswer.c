#include <stdio.h>
int sum(int num) {
   int s=0;
   while (num) {
      s += num--;
   }
   return s;
}
char* find(const char* str, char val) {
   char* ptr = NULL;
   while (*str && !ptr) {
      if (*str == val) ptr = str;
      str++;
   }
   return ptr;
}
void copy(const char* df, const char* sf) {
   FILE* d = fopen(df, "w");
   FILE* s = fopen(sf, "r");
   char ch;
   while(fscanf(sf, "%c", &ch) == 1) {
      fprintf(df, "%c", ch);
   }
   fclose(d);
   fclose(s);
}
struct Student {
   char name_[21];
   char surnam_[41];
   int stno;
   char email_[256];
   float GPA_;
   double osapLoan_;
};
void copySTRs(char d[][41], cosnt chars[][41], int n) {
   int i;
   for (i = 0; i < n; i++) {
      strcpy(d[i], s[i]);
   }
}
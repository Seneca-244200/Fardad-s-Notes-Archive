#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "Utils.h"
using namespace std;
using namespace sdds;
struct Name {
   char* m_first;
   char* m_last;
};
void read(Name& name) {
   name.m_first = readDynCstr("First name: ");
   readDynCstr(name.m_last, "Last name: ");
}
void display(const Name& n) {
   printf("%s %s\n", n.m_first, n.m_last);
}
void freeNameMem(Name& n) {
   delete[] n.m_first;
   delete[] n.m_last;
}
int main() {
   Name* array = nullptr;
   //int* array{}; universal way of initializing things to null
   int num;
   int i;
   printf("How many names : ");
   scanf("%d", &num);
   flushKey();
   array = new Name[num];
   for (i = 0; i < num; i++) {
      printf("%d:\n",(i + 1));
      read(array[i]);
   }
   for (i = num - 1; i >= 0; i--) {
      display(array[i]);
   }
   // deletes indivitual memories of each name;
   for (i = 0; i < num; i++) {
//      freeNameMem(array[i]);
      delete[] array[i].m_first;
      delete[] array[i].m_last;
   }
   // delete the name array
   delete[] array;
   array = nullptr;
   return 0;
}

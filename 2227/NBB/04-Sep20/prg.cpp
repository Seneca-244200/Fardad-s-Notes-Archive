#include <cstdio>
#include "Utils.h"
using namespace std;
using namespace sdds;
struct Name {
   char* m_first;
   char* m_last;
};
void display(const Name& N) {
   printf("%s %s\n", N.m_first, N.m_last);
}
bool read(Name& N) {
   bool ret{};
   N.m_first = readDynCstr("First name: ");
   N.m_last = readDynCstr("Last name: ");
   if (N.m_first && N.m_last) { // DMA success
      ret = true;
   }
   else{ // DMA failed
      delete[] N.m_first;
      delete[] N.m_last;
      ret = false;
   }
   return ret;
}
int main() {
   int num{};
   Name* array{};
   //same as:
   //int* array = nullptr;
   printf("How many names? ");
   scanf("%d", &num);
   array = new Name[num]; // request OS for num integers int heap;
   if (array == nullptr) {
      printf("Not enough memory!\n");
   }
   else { // everything good, keep going
      int i;
      printf("Please enter %d integer values...", num);
      for (i = 0; i < num; i++) {
         printf("%d: ", (i + 1));
         read(array[i]);
      }
      printf("Values in reverse: \n");
      for (i = num - 1; i >= 0; i--) {
         display(array[i]);
      }
      for (i = num - 1; i >= 0; i--) {
         delete[] array[i].m_first;
         delete[] array[i].m_last;
      }
      delete[] array;
      array = nullptr;
   }
   return 0;
}
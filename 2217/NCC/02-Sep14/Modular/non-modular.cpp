#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>  // C language #include <stdio.h>
#include <cstring>
using namespace std;



int menu();
int main() {
   struct Item I[MAX_ITEMS];
   char newline = ' ';
   fptr = fopen("items.csv", "r");
   int i = 0;
   int done = 0;
   if (fptr) {
      i = loadItems(I);
      fclose(fptr);
      do {
         switch (menu()) {
         case 1:
            prnItems(I, i);
            break;
         case 2:
            searchItems(I, i);
            break;
         case 3:
            sortItems(I, i);
            printf("Items sorted\n\n");
            break;
         case 0:
            printf("Are you sure you want to exit? (Y)es/(N)o: ");
            if (yes()) {
               done = 1;
            }
         }
      } while (!done);
   }
   else {
      printf("Could not open the file!\n");
   }
   return 0;
}

int loadItems(struct Item* Iptr) {
   int i = 0;
   while (readItem(&Iptr[i])) {
      i++;
   }
   return i;
}
void prnTitles() {
   printf("UPC  | Name               |   Price   |   Tax   |   Total\n"
      "-----+--------------------+-----------+---------+----------- \n");
}
void prnItemRow(const struct Item* A) {
   printf("%-5d|%-20s|%11.2lf|", A->upc, A->name, A->price);
   if (A->isTaxed)
      printf("%9.2lf|%11.2lf\n", A->price * TAX, A->price * (1 + TAX));
   else
      printf("%9.2lf|%11.2lf\n", 0.0, A->price);
}
void prnItems(struct Item* A, int size) {
   int i;
   prnTitles();
   for (i = 0; i < size; i++) {
      prnItemRow(&A[i]);
   }
   putchar('\n');
}
int readItem(struct Item* Ip) {
   return fscanf(fptr, "%d,%20[^,],%lf,%d", &Ip->upc, Ip->name, &Ip->price, &Ip->isTaxed) == 4;
}
void sortItems(struct Item* A, int size) {
   int i, j;
   struct Item swap;
   for (i = 0; i < (size - 1); i++) {
      for (j = 0; j < (size - i - 1); j++) {
         if (strcmp(A[j].name, A[j + 1].name) > 0) {
            swap = A[j + 1];
            A[j + 1] = A[j];
            A[j] = swap;
         }
      }
   }
}
void searchItems(const struct Item* A, int size) {
   int i;
   int found = 0;
   char name[21];
   printf("Enter product name: ");
   getStr(name, 20);
   printf("\nSearching for \"%s\":\n", name);
   prnTitles();
   for (i = 0; i < size; i++) {
      if (strstr(A[i].name, name)) {
         prnItemRow(&A[i]);
         found = 1;
      }
   }
   if (!found) {
      printf("\"%s\" did not match any product.\n", name);
   }
   putchar('\n');
}



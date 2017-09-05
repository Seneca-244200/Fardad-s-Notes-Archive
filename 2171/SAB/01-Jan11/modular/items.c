#include <stdio.h>
#include <string.h>
#include "tools.h"
#define TAX (0.13)
#define MAX_ITEMS (100)
struct Item{
   char name[21];
   int upc;
   double price;
   int isTaxed;
};


void prnTitles();
void prnItemRow(const struct Item* AddressOfItemToPrint);
int readItem(struct Item* AddressOfItem, FILE* FileToReadFrom);
int loadItems(struct Item* Iptr, FILE* fptr);
void sortItems(struct Item* ArrayOfItems, int size);
void prnItems(struct Item* ArrayOfItems, int size);
void searchItems(const struct Item* ArrayOfItems, int size);
int menu();
int main(){
   struct Item I[MAX_ITEMS];
   char name[21];
   char newline = ' ';
   FILE* fptr = fopen("items.txt", "r");
   int i = 0;
   int cnt;
   int done = 0;
   if (fptr){
      i = loadItems(I, fptr);
      sortItems(I, i);
      fclose(fptr);
      do{
         switch (menu()){
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
            if (yes()){
               done = 1;
            }
         }
      } while (!done);
   }
   else{
      printf("Could not open the file!\n");
   }
   return 0;
}

int loadItems(struct Item* Iptr, FILE* fptr){
   int i = 0;
   while (!feof(fptr)){
      readItem(&Iptr[i], fptr);
      if (!feof(fptr)){
         i++;
      }
   }
   return i;
}
void prnTitles(){
   printf("UPC  | Name               |   Price   |   Tax   |   Total\n"
      "-----+--------------------+-----------+---------+----------- \n");
}
void prnItemRow(const struct Item* A){
   printf("%-5d|%-20s|%11.2lf|", A->upc, A->name, A->price);
   if (A->isTaxed)
      printf("%9.2lf|%11.2lf\n", A->price * TAX, A->price * (1 + TAX));
   else
      printf("%9.2lf|%11.2lf\n", 0.0, A->price);
}
void prnItems(struct Item* A, int size){
   int i;
   prnTitles();
   for (i = 0; i < size; i++){
      prnItemRow(&A[i]);
   }
   putchar('\n');
}
int readItem(struct Item* Ip, FILE* fptr){
   return fscanf(fptr, "%d,%20[^,],%lf,%d", &Ip->upc, Ip->name, &Ip->price, &Ip->isTaxed) == 4;
}
void sortItems(struct Item* A, int size){
   int i, j;
   struct Item swap;
   for (i = 0; i < (size - 1); i++){
      for (j = 0; j < (size - i - 1); j++){
         if (strcmp(A[j].name, A[j + 1].name) > 0){
            swap = A[j + 1];
            A[j + 1] = A[j];
            A[j] = swap;
         }
      }
   }
}
void searchItems(const struct Item* A, int size){
   int i;
   int found = 0;
   char name[21];
   printf("Enter product name: ");
   getStr(name, 20);
   printf("\nSearching for \"%s\":\n", name);
   prnTitles();
   for (i = 0; i < size; i++){
      if (strstr(A[i].name, name)){
         prnItemRow(&A[i]);
         found = 1;
      }
   }
   if (!found){
      printf("\"%s\" did not match any product.\n", name);
   }
   putchar('\n');
}

int menu(){
   printf("1- List all items\n"
      "2- Search for an item\n"
      "3- Sort Items\n"
      "0- Exit program\n> ");
   return getLimInt(0, 3);
}


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define TAX (0.13)
#define MAX_ITEMS (100)
FILE* fptr = NULL;
struct Item{
   char name[21];
   int upc;
   double price;
   int isTaxed;
};

void keybFlush();
int getStr(char* str, int maxlen);
int getInt();
double getDouble();
int getLimInt(int lowerLimit, int upperLimit);
double getLimDbl(double lowerLimit, double upperLimit);
int yes();
void prnTitles();
void prnItemRow(const struct Item* AddressOfItemToPrint);
int readItem(struct Item* AddressOfItem);
int loadItems(struct Item* Iptr);
void sortItems(struct Item* ArrayOfItems, int size);
void prnItems(struct Item* ArrayOfItems, int size);
void searchItems(const struct Item* ArrayOfItems, int size);
int menu();
int main(){
   struct Item I[MAX_ITEMS];
   char name[21];
   char newline = ' ';
   fptr = fopen("items.csv", "r");
   int i = 0;
   int done = 0;
   if (fptr){
      i = loadItems(I);
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

int loadItems(struct Item* Iptr){
   int i = 0;
   while (!feof(fptr)){
      readItem(&Iptr[i]);
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
int readItem(struct Item* Ip){
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

int getStr(char* str, int maxlen){
   int i = -1;
   do{
      i++;
      str[i] = getchar();
   } while (i < maxlen && str[i] != '\n');
   if (str[i] != '\n'){
      keybFlush();
   }
   str[i] = 0;
   return i;
}
void keybFlush(){
   while (getchar() != '\n');
}
int getInt(){
   int val;
   char nl = 'x';
   while (nl != '\n'){
      scanf("%d%c", &val, &nl);
      if (nl != '\n'){
         keybFlush();
         printf("Invalid Integer, please try again: ");
      }
   }
   return val;
}
double getDouble(){
   double val;
   char nl = 'x';
   while (nl != '\n'){
      scanf("%lf%c", &val, &nl);
      if (nl != '\n'){
         keybFlush();
         printf("Invalid number, please try again: ");
      }
   }
   return val;
}
int getLimInt(int lowerLimit, int upperLimit){
   int val;
   do{
      val = getInt();
   } while ((val < lowerLimit || val > upperLimit) && printf("Invalid value, %d < value < %d: ", lowerLimit, upperLimit));
   return val;
}
double getLimDbl(double lowerLimit, double upperLimit){
   double val;
   do{
      val = getDouble();
   } while ((val < lowerLimit || val > upperLimit) && printf("Invalid value, %lf < value < %lf: ", lowerLimit, upperLimit));
   return val;
}

int yes(){
   char ch = 'x';
   int res;
   do{
      ch = getchar();
      res = (ch == 'Y' || ch == 'y');
      keybFlush();
   } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N' && printf("Only (Y)es or (N)o are acceptable: "));
   return res;
}
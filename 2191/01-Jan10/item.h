#ifndef __FS_ITEM_H__
#define __FS_ITEM_H__
#include <cstdio>
#define TAX (0.13)
#define MAX_ITEMS (100)

struct Item{
   char name[21];
   int upc;
   double price;
   int isTaxed;
};

void prnTitles();
void prnItemRow(const Item* AddressOfItemToPrint);
int readItem(Item* AddressOfItem, std::FILE* FileToReadFrom);
int loadItems(Item* Iptr, std::FILE* fptr);
void sortItems(Item* ArrayOfItems, int size);
void prnItems(Item* ArrayOfItems, int size);
void searchItems(const Item* ArrayOfItems, int size);



#endif

#ifndef ICT_ITEM_H__
#define ICT_ITEM_H__

#include "tools.h"
namespace ict {
#define TAX (0.13)
#define MAX_ITEMS (100)
   struct Item {
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
}

#endif
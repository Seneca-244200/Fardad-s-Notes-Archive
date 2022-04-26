#ifndef SDDS_ITEM_H
#define SDDS_ITEM_H

#include <cstdio>  // include only if needed. NEVER do "just in case include"
namespace sdds {
   const double TAX = (0.13);
   const int MAX_ITEMS = (100);

   struct Item {
      char name[21];
      int upc;
      double price;
      int isTaxed;
   };

   void prnTitles();
   void prnItemRow(const struct Item* AddressOfItemToPrint);
   int readItem(struct Item* AddressOfItem);
   int loadItems(struct Item* Iptr);
   void sortItems(struct Item* ArrayOfItems, int size);
   void prnItems(struct Item* ArrayOfItems, int size);
   void searchItems(const struct Item* ArrayOfItems, int size);
   extern std::FILE* fptr;  // prototype for the fptr variable in item module (item.cpp)
}
#endif
#ifndef SDDS_ITEM_H
#define SDDS_ITEM_H
#include <cstdio>
// using namespace std; wrong, do not use namespace in a header file
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

   extern std::FILE* fptr;
}
#endif // !SDDS_ITEM_H



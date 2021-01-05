#ifndef SDDS_SORT_H__
#define SDDS_SORT_H__
namespace sdds {
   /*
   type must be copy-able 
   type must be assign-able
   type must be compareable to another type using operator <
   type must be compareable to another type using operator >
   */
   template <typename type>
   void swap(type* a, type* b) {
      type temp = *a;
      *a = *b;
      *b = temp;
   }


   template <typename type>
   void sort(type a[], int size, bool ascending = true) {
      int i;
      int j;
      for (i = 0; i < (size - 1); i++) {
         for (j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (a[j] > a[j + 1]) {
                  swap(&a[j], &a[j + 1]);
               }
            }
            else {
               if (a[j] < a[j + 1]) {
                  swap(&a[j], &a[j + 1]);
               }
            }
         }
      }
   }
}
#endif
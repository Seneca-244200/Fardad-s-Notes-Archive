#pragma once
#ifndef SDDS_SORT_H
#define SDDS_SORT_H
namespace sdds {

   /*
    type must be copyable
    type must be assignable to another type.

   */
   template <typename type>
   void swap(type* a, type* b) {
      type temp = *a; // assignment at the moment of createion is constructor (Copy constructor
      *a = *b;
      *b = temp;
   }

   /*
   T must work with Operator <
   */
   template <typename T>
   void sort(T arr[], int n, bool Ascending = true) {
      int i{}, j{};
      for (i = 0; i < n; i++) {
         for (j = 0; j < n - i - 1; j++) {
            if (Ascending) {
               if (!(arr[j] < arr[j + 1])) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j] < arr[j + 1]) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }
}


#endif // !SDDS_SORT_H

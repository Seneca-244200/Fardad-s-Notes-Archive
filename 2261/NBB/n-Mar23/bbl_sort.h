#ifndef SENECA_BBL_SORT_H
#define SENECA_BBL_SORT_H
#include "Container.h"
/*
The type of the following tempalte module require:
// copy constructor
// copy assignment
// operator< and operator>
// insertion operator for ostream

*/
namespace seneca {
   template <typename T>
   void swap(T* a, T* b) {
      T t = *a;
      *a = *b;
      *b = t;
   }

   template <typename type>
   void bbl_sort(type arr[], size_t size, bool ascending = true) {
      for (size_t i = 0; i < size - 1; i++) {
         for (size_t j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (arr[j] > arr[j + 1]) {
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

   template <> // specialization for bbl_sort to be able to sort a contaner
   void bbl_sort<Container>(Container arr[], size_t size, bool ascending = true) {
      for (size_t i = 0; i < size - 1; i++) {
         for (size_t j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (arr[j].value() > arr[j + 1].value()) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j].value() < arr[j + 1].value()) {
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }

   template <typename Type>
   void prn_csv(Type arr[], size_t size) {
      for (size_t i = 0; i < size; i++) {
         cout << arr[i];
         if (i != size - 1)  cout << ", ";
      }
      cout << endl;
   }

}


#endif

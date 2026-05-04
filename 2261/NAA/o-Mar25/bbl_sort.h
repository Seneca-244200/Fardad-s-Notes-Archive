#ifndef SENECA_BBL_SORT_H
#define SENECA_BBL_SORT_H
/*
The type of the following tempalte module require:
// copy constructor
// copy assignment
// operator< and operator>, except for classes of type Container
// insertion operator for ostream

*/

#include <iostream>
#include "Container.h"
namespace seneca {

   template <typename T>
   void swap(T* a, T* b) {
      T t = *a; // copy construction 
      *a = *b; // copy assignment
      *b = t;
   }

   template <typename type>
   void bbl_sort(type arr[], size_t size, bool ascending = true) {
      for (size_t i = 0; i < size - 1; i++) {
         for (size_t j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (arr[j] > arr[j + 1]) { // type must support >
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j] < arr[j + 1]) { // type must support <
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }

   // the sepcialization for the bbl_sort does not need the default arg value
   // since it is provided in the main template creation.
   template<>
   void bbl_sort<Container>(Container arr[], size_t size, bool ascending) {
      for (size_t i = 0; i < size - 1; i++) {
         for (size_t j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (arr[j].compare(arr[j + 1]) > 0) { // type must support >
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j].compare(arr[j + 1]) < 0) { // type must support <
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }


   /* quick fix for container is to overload, which is bad
   void bbl_sort(Container arr[], size_t size, bool ascending = true) {
      for (size_t i = 0; i < size - 1; i++) {
         for (size_t j = 0; j < size - i - 1; j++) {
            if (ascending) {
               if (arr[j].compare(arr[j + 1]) > 0) { // type must support >
                  swap(&arr[j], &arr[j + 1]);
               }
            }
            else {
               if (arr[j].compare(arr[j + 1]) < 0) { // type must support <
                  swap(&arr[j], &arr[j + 1]);
               }
            }
         }
      }
   }
   */


   template <typename type>
   void prn_csv(type arr[], size_t size) {
      for (size_t i = 0; i < size; i++) {
         std::cout << arr[i];  // type must be insertable into ostream
         if (i != size - 1)  std::cout << ", ";
      }
      std::cout << std::endl;
   }
}

#endif 
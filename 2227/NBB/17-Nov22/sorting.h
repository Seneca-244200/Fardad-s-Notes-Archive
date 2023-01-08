// copy constructor and assignment
// T must support operator<
// T must support insertion into ostream
#ifndef  SDDS_SORTING_H__
#define  SDDS_SORTING_H__
#include <iostream>
namespace sdds {

   template <typename T>
   void swap(T* a, T* b) {
      T temp = *a;
      *a = *b;
      *b = temp;
   }


   template <typename T>
   void sort(T* array, int size) {
      int i, j;
      for (i = 0; i < size - 1; i++) {
         for (j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
               swap(&array[j], &array[j + 1]);
            }
         }
      }
   }


   template <typename T>
   void prnArray(const T* array, int size) {
      for (int i = 0; i < size; i++) {
         if (i) std::cout << ", ";
         std::cout << array[i];
      }
      std::cout << std::endl;
   }
}
#endif // ! SDDS_SORTING_H__

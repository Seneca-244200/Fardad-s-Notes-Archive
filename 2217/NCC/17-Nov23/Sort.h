#ifndef  SDDS_SORT_H
#define  SDDS_SORT_H
/*
* Sort template requires:
* comply Rule of three for the type 
* and operator > between two type.
*/

namespace sdds {
   template <class type>
   void swap(type* a, type* b) {
      type temp = *a;
      *a = *b;
      *b = temp;
   }
   template <typename type>
   void sort(type* array, long size) {
      long i, j;
      for (i = 0; i < size - 1; i++) {
         for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
               swap(&array[j], &array[j + 1]);
            }
         }
      }
   }

}


#endif // ! SDDS_SORT_H

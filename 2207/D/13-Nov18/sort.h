#ifndef SDDS_SORT_H__
#define SDDS_SORT_H__

template <typename T>
void swap(T* a, T* b) {
   T temp = *a;
   *a = *b;
   *b = temp;
}


template <typename type>
void sort(type a[], int size, bool ascending = true) {
   int i;
   int j;
   for (i = 0; i < (size - 1); i++) {
      for (j = 0; j < size - i - 1; j++) {
         if (ascending) {            // operator > should work with types
            if (a[j] > a[j + 1]) {  // bool type::operator>(type) or similar must be defined
               swap(&a[j], &a[j + 1]);
            }
         }
         else {                         // operator < should work with types
            if (a[j] < a[j + 1]) {  // bool type::operator<(type) or similar must be defined
               swap(&a[j], &a[j + 1]);
            }
         }
      }
   }
}




#endif // !SDDS_SORT_H__

